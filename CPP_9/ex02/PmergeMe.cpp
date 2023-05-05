#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

int PmergeMe::error(std::string string)
{
    std::cerr << string << std::endl;
    return 1;
}

void    PmergeMe::Checking(char **input)
{
    for (int x = 1; input[x]; x++)
    {
        size = strlen(input[x]);
        for (int y = 0; y < size; y++)
        {
            if (!std::isdigit(input[x][y]))
            {
                throw std::exception();
            }
        }
        s.insert(input[x]);
    }
    for (int x = 1; input[x]; x++)
    {
        int t = atoi(input[x]);
        list.push_back(t);
        deque.push_back(t);
    }
}

void PmergeMe::timing()
{
	std::list<int>::iterator i = list.begin();
	std::deque<int>::iterator j = deque.begin();
	std::clock_t start;
	std::clock_t end;
	double seconds;

	std::cout <<"Before: ";
        while(i != list.end())
            std::cout << " " << *i++;
        std::cout <<std::endl<<std::endl;

        start = std::clock();
        mergeInsertSort(list.begin(), list.end());
        end = std::clock();
        seconds = static_cast<double> (end - start) / CLOCKS_PER_SEC;

        std::cout <<"Sort with list:";
		i = list.begin();
        while(i != list.end())
            std::cout << " " << *i++;
        std::cout <<std::endl<<"Time: "<< seconds <<" seconds"<<std::endl<<std::endl;

        start = std::clock();
        mergeInsertSort(deque.begin(), deque.end());
        end = std::clock();
        seconds = static_cast<double>(end - start) / CLOCKS_PER_SEC;

        std::cout <<"Sort with deque:";
        while(j != deque.end())
                std::cout << " " << *j++;
        std::cout <<std::endl<<"Time: "<< seconds <<" seconds"<<std::endl<<std::endl;
}
