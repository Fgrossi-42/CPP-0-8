#include <algorithm>
#include <set>
#include <list>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
#include <cmath>
#include <deque>

class PmergeMe
{
    private:
        std::set<std::string> s;
        int size;
        std::list<int> list;
        std::deque<int> deque;
        int x;
        int y;
        int z;
        int num;
    public:
        PmergeMe();
        ~PmergeMe();
        void	Checking(char **input);
        template<typename Iterator>
        void insertionSort(Iterator begin, Iterator end);
        template<typename Iterator>
        void mergeInsertSort(Iterator begin, Iterator end, int cutoff = 10);
        void timing();
        int error(std::string string);
};