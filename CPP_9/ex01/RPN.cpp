#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

int RPN::error(std::string str)
{
    std::cout << str << std::endl;
    return (1);
}

int RPN::checkline(char **argv)
{
    while(argv[1][x])
    {
        if (argv[1][x] == ' ')
            x++;
        else if (argv[1][x] == '+' || argv[1][x] == '-' || argv[1][x] == '*' || argv[1][x] == '/')
        {
            if (argv[1][x + 1] == ' ' || argv[1][x + 1] == '\0')
                x++;
            else
                return (error("Error: missing space or missing token"));
        }
        else if (isdigit(argv[1][x]))
        {
            if (argv[1][x + 1] == ' ' && argv[1][x + 2] != '\0')
                x++;
            else
                return (error("Error: missing space or missing token"));
        }
        else
            return (error("Error: invalid token"));
    }
    return (0);
}

int RPN::readLine(char **argv)
{
    if(checkline(argv) == 1)
        return 1;
    std::stringstream ss(argv[1]);
    while (ss >> buf)
        tokens.push_back(buf);
    std::vector<std::string>::iterator it = tokens.begin();
    std::vector<std::string>::iterator ite = tokens.end();

    while (it != ite)
    {
        if (*it == "+" || *it == "-" || *it == "*" || *it == "/")
        {
            if (stack.size() < 2)
                return (error("Error: not enough numbers in stack"));
            int a = std::stoi(stack.back());
            stack.pop_back();
            int b = std::stoi(stack.back());
            stack.pop_back();
            if (*it == "+")
                stack.push_back(std::to_string(b + a));
            else if (*it == "-")
                stack.push_back(std::to_string(b - a));
            else if (*it == "*")
                stack.push_back(std::to_string(b * a));
            else if (*it == "/")
            {
                if (a == 0)
                    return (error("Error: division by 0"));
                stack.push_back(std::to_string(b / a));
            }
        }
        else
            stack.push_back(*it);
        it++;
    }
    std::cout<<stack.back()<<std::endl;
    return 0;
}