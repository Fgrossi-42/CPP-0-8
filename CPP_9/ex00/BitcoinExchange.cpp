#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    x = 0;
    i = 0;
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::read_file(char **argv)
{
    file.open(argv[1]);
    if (file.is_open())
    {
        while (getline(file, line))
        {
            std::stringstream s(line);
            while (getline(s, word, '|'))
            {
                row.push_back(word);
            }
            content.push_back(row);
            row.clear();
        }
    }
    file.close();
}

void BitcoinExchange::read_db()
{
    file1.open("data.csv");
    if (file1.is_open())
    {
        while (getline(file1, db_line))
        {
            std::stringstream s(db_line);
            while (getline(s, db_word, ','))
            {
                db_row.push_back(db_word);
            }
            db_content.push_back(db_row);
            db_row.clear();
        }
    }
    file1.close();
}

void BitcoinExchange::remove_spaces()
{
    for (int i = 0; i < (int)content.size(); i++)
    {
        for (int j = 0; j < (int)content[i].size(); j++)
        {
            content[i][j].erase(std::remove(content[i][j].begin(), content[i][j].end(), ' '), content[i][j].end());
        }
    }
}

int check_args(std::vector<std::string> content)
{
    if (content.size() != 2)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return 0;
    }
    if (content[0].size() != 10)
    {
        std::cout << "Error: wrong date format" << std::endl;
        return 0;
    }
    for (int i = 0; i < (int)content[0].size(); i++)
    {
        if (i == 4 || i == 7)
        {
            if (content[0][i] != '-')
            {
                std::cout << "Error: wrong date format" << std::endl;
                return 0;
            }
        }
        else
        {
            if (!isdigit(content[0][i]))
            {
                std::cout << "Error: wrong date format" << std::endl;
                return 0;
            }
        }
    }
    for (int i = 0; i < (int)content[1].size(); i++)
    {
        if (!isdigit(content[1][i]))
        {
            std::cout << "Error: wrong amount format" << std::endl;
            return 0;
        }
    }
    return 1;
}

void find_nearest_date(std::string content, std::vector<std::vector<std::string> > database)
{
    
}

void BitcoinExchange::compare_dates()
{
    float money;
    int print = 0;

    for (int i = 0; i < (int)content.size(); i++)
    {
        print = 0;
        if(check_args(content[i]) == 0)
            continue;
        for (int j = 0; j < (int)db_content.size(); j++)
        {
            if (!memcmp(content[i][0].c_str(), db_content[j][0].c_str(), 10))
            {
                money = stof(content[i][1]) * stof(db_content[j][1]);
                std::cout<<content[i][0] << " => " << content[i][1] << " = " << money<< std::endl;
                print = 1;
            }
        }
        if(print == 0)
            find_nearest_date(content[i][0], db_content);
    }
}