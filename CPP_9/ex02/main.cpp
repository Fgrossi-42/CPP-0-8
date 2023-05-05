#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    PmergeMe p;

	if (argc < 2)
        p.error("Error: wrong param given.");
	try
    {
        p.Checking(argv);
    }
	catch(const std::exception& e)
	{
		p.error("Error: wrong param given.");
	}
    p.timing();
}