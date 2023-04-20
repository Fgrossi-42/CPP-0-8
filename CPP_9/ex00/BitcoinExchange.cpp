#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::read_db_map()
{
	file1.open("data.csv");
	if (file1.is_open())
	{
		while (getline(file1, db_line))
		{
			std::stringstream s(db_line);
			while (getline(s, db_word, ','))
			{
				while (getline(s, word, ','))
				{
					db_map.insert(std::pair<std::string, std::string>(db_word, word));
				}
			}
		}
	}
	file1.close();
}

std::string BitcoinExchange::remove_spaces(std::string word)
{
	word.erase(std::remove(word.begin(), word.end(), ' '), word.end());
	return word;
}

int BitcoinExchange::check_args(std::string content)
{
	std::stringstream input_stringstream(content);

	getline(input_stringstream,date,' ');
    if (date.size() != 10 && date.size() != 11)
    {
        std::cout << "Error: wrong date format" << std::endl;
        return 0;
    }
    for (int i = 0; i < (int)date.size(); i++)
    {
        if (i == 4 || i == 7)
        {
            if (date[i] != '-')
            {
                std::cout << "Error: wrong date format" << std::endl;
                return 0;
            }
        }
        else
        {
            if (!isdigit(date[i]))
            {
                std::cout << "Error: wrong date format" << std::endl;
                return 0;
            }
        }
    }
	if(!getline(input_stringstream,date,' '))
	{
		std::cout << "Error: bad input => " <<date<< std::endl;
        return 0;
	}
	else
	{
		getline(input_stringstream,date);
		num = std::stof(date);
		if (num < 0)
		{
			std::cout << "Error: not a positive number."<< std::endl;
			return 0;
		}
		if(num >= 2147483648)
		{
			std::cout << "Error: too large a number."<< std::endl;
			return 0;
		}
	}
    return 1;
}

void BitcoinExchange::find_nearest_date(std::string day)
{
	std::map<std::string, std::string>::iterator it = db_map.lower_bound(day);
    if (it == db_map.begin()) {
        std::cout << "No lower key found" << std::endl;
    } else {
        --it;
        std::cout<<word<<"=>"<<db_word<<" = "<< (std::stof(db_word) * std::stof(it->second))<<std::endl;
    }
}

void BitcoinExchange::compare_dates(char **argv)
{
	std::map<std::string, std::string>::iterator it;
	int found = 0;

	file.open(argv[1]);
    if (file.is_open())
    {
        while (getline(file, line))
        {
			if(check_args(line.c_str()) == 0)
				continue;
            std::stringstream s(line);
            while (getline(s, word, '|'))
            {
				word = remove_spaces(word);
				for(it = db_map.begin(); it != db_map.end(); it++)
				{
					if (memcmp(it->first.c_str(), word.c_str(), 11) == 0)
					{
						getline(s, db_word);
						std::cout<<word<<"=>"<<db_word<<" = "<< (std::stof(db_word) * std::stof(it->second))<<std::endl;
						found = 1;
					}
					getline(s, db_word);
				}
				if (found == 0)
				{
					find_nearest_date(word);
				}
				found = 0;
            }
        }
    }
    file.close();
}