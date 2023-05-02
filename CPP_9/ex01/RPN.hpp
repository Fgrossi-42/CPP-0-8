#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <fstream>
# include <vector>
# include <string>
# include <sstream>
# include <cctype>
# include <algorithm>

class RPN
{
    private:
        std::vector<std::string> tokens;
        std::string buf;
        std::string line;
        std::vector<std::string> stack;
		int x;
    public:
        RPN();
        ~RPN();
        int    readLine(char **argv);
        int    checkline(char **argv);
		int     error(std::string str);
};

#endif