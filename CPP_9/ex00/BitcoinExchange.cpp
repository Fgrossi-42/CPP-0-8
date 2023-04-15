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

void BitcoinExchange::compare_dates()
{
    float money;

    for (int i = 0; i < (int)content.size(); i++)
    {
        for (int j = 0; j < (int)db_content.size(); j++)
        {
            if (!memcmp(content[i][0].c_str(), db_content[j][0].c_str(), 10))
            {
                money = stof(content[i][1]) * stof(db_content[j][1]);
                std::cout<<content[i][0] << " => " << content[i][1] << " = " << "money bitcoin: "<< money<< std::endl;
            }
        }
    }
}