#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

int RPN::checkline(char **argv)
{
    while(argv[1][x])
    {
        if (argv[1][x] == ' ')
            x++;
        else if (argv[1][x] == '+' || argv[1][x] == '-' || argv[1][x] == '*' || argv[1][x] == '/' || argv[1][x] == '%')
        {
            if (argv[1][x + 1] == ' ')
                x++;
            else
            {
                std::cout << "Error: Invalid expression" << std::endl;
                return (1);
            }
        }
        else if (isdigit(argv[1][x]))
        {
            y = x;
            while (isdigit(argv[1][y]))
                y++;
            if (argv[1][y] == ' ')
                x = y;
            else
            {
                std::cout << "Error: Invalid expression" << std::endl;
                return (1);
            }
        }
        else
        {
            std::cout << "Error: Invalid expression" << std::endl;
            return (1);
        }
    }
}

void RPN::readLine(char **argv)
{
    checkline(argv);
}