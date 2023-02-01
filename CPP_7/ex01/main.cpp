#include "Iter.hpp"

void print(int &a)
{
    std::cout << a << " ";
}

void addOne(int &a)
{
    a++;
}

void MinusOne(int &a)
{
    a--;
}

void PrintExponential(int &a)
{
    std::cout << a * a << " ";
}

int main()
{
    int tab[] = {0, 1, 2, 3, 4};
    iter(tab, 5, print);
    std::cout << std::endl;
    iter(tab, 5, addOne);
    iter(tab, 5, addOne);
    iter(tab, 5, addOne);
    iter(tab, 5, addOne);
    iter(tab, 5, print);
    std::cout << std::endl;
    iter(tab, 5, MinusOne);
    iter(tab, 5, MinusOne);
    iter(tab, 5, print);
    std::cout << std::endl;
    iter(tab, 5, PrintExponential);
    return 0;
}