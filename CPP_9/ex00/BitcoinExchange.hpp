#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <vector>
# include <string>
# include <map>
# include <sstream>
# include <cctype>
# include <algorithm>

class BitcoinExchange
{
    private:
        std::string line;
        std::string db_line;
        std::string word;
        std::string date;
        float num;
        std::string db_word;
        std::fstream file;
        std::fstream file1;
        std::map<std::string, std::string> db_map;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        void read_db_map();
        void compare_dates(char **argv);
        std::string remove_spaces(std::string word);
        void find_nearest_date(std::string day);
        int check_args(std::string content);
};

#endif