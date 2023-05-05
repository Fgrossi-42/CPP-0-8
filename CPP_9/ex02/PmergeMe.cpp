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

void	PmergeMe::Checking(char **input)
{
	while(input[x])
	{
		size = strlen(input[x]);
		while(z++ < size)
			if (!std::isdigit(input[x][z]))
				throw std::exception();
		s.insert(input[x]);
        x++;
	}
    while (input[y])
	{
		num = atoi(input[y]);
        list.push_back(num);
        deque.push_back(num);
        y++;
	}
}

template<typename Iterator>
void insertionSort(Iterator begin, Iterator end)
{
    Iterator i = begin;
    Iterator j;

	while(++i != end)
	{
		j = i;
		while (j-- != begin && *j < *(std::prev(j)))
			std::iter_swap(j, std::prev(j));
	}
}

template<typename Iterator>
void mergeInsertSort(Iterator begin, Iterator end)
{
    Iterator middle;
    int limit = 10;

	if (std::distance(begin, end) <= limit)
		insertionSort(begin, end);
	else
	{
		middle = begin;
		std::advance(middle, std::distance(begin, end) / 2);
		mergeInsertSort(begin, middle, limit);
		mergeInsertSort(middle, end, limit);
		std::inplace_merge(begin, middle, end);
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
	while(i++ != list.end())
		std::cout << " " << *i;
	std::cout <<std::endl<<std::endl;

	start = std::clock();
	mergeInsertSort(list.begin(), list.end());
	end = std::clock();
	seconds = static_cast<double> (end - start) / CLOCKS_PER_SEC;

	std::cout <<"Sort using list: ";
    i = list.begin();
	while(i++ != list.end())
		std::cout << " " << *i;
	std::cout <<std::endl<<"Time: "<< seconds <<" seconds"<<std::endl<<std::endl;

	start = std::clock();
	mergeInsertSort(deque.begin(), deque.end());
	end = std::clock();
	seconds = static_cast<double>(end - start) / CLOCKS_PER_SEC;

	std::cout <<"Sort using deque: ";
	while(j++ != deque.end())
		std::cout << " " << *j;
	std::cout <<std::endl<<"Time: "<< seconds << " seconds"<<std::endl<<std::endl;
}