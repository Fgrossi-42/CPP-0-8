#include "RPN.hpp"

int main(int argc, char **argv)
{
    RPN rpn;

    if(argc != 2)
        std::cout << "Error: Invalid number of arguments" << std::endl;
    else
        rpn.readLine(argv);
}