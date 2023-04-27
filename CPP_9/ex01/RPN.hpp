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
        std::string line;
		int x;
		int y;
    public:
        RPN();
        ~RPN();
        void    readLine(char **argv);
        int    checkline(char **argv);
		void	error(std::string str);
};

#endif