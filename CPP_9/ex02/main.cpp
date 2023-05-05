#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
        PmergeMe p;

        if (argc < 2)
                return p.error("Error: no param given.");
        try
        {
                p.Checking(argv);
        }
        catch(const std::exception& e)
        {
                return p.error("Error: invalid param.");
        }
        p.timing();
}