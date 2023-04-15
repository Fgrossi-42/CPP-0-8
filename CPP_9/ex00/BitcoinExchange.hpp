#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <vector>
# include <sstream>
# include <cctype>
# include <algorithm>

class BitcoinExchange
{
    private:
        std::vector<std::vector<std::string> > content;
        std::vector<std::vector<std::string> > db_content;
        std::vector<std::string> row;
        std::vector<std::string> db_row;
        std::string line;
        std::string word;
        std::string db_line;
        std::string db_word;
        std::fstream file;
        std::fstream file1;
        int x;
        int i;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        void read_file(char **argv);
        void read_db();
        void compare_dates();
        void remove_spaces();
};

#endif