#include <algorithm>
#include <set>
#include <list>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
#include <cmath>

class PmergeMe
{
    private:
        std::list<int> list;
        std::deque<int> deque;
        std::set<std::string> s;
        int size;

    public:
        PmergeMe();
        ~PmergeMe();
        int error(std::string string);
        void    timing();
        void    Checking(char **input);
};

template<typename Iterator>
void insertionSort(Iterator begin, Iterator end)
{
        for (Iterator i = begin; i != end; ++i)
        {
                Iterator j = i;
                while (j != begin && *j < *(std::prev(j)))
                {
                        std::iter_swap(j, std::prev(j));
                        j--;
                }
        }
}

template<typename Iterator>
void mergeInsertSort(Iterator begin, Iterator end, int cutoff = 10)
{
        if (std::distance(begin, end) <= cutoff)
                insertionSort(begin, end);
        else
        {
                Iterator middle = begin;
                std::advance(middle, std::distance(begin, end) / 2);
                mergeInsertSort(begin, middle, cutoff);
                mergeInsertSort(middle, end, cutoff);
                std::inplace_merge(begin, middle, end);
        }
}