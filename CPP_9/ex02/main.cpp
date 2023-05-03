#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    PmergeMe merge;

    if(argc < 2)
        std::cout << "Error: Don't be shy, put something" << std::endl;
    else
        merge.setstack(argv);
}