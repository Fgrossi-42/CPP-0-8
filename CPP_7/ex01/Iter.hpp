#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
# include <cctype>



template <typename F>
void iter(int a[], int b, F c)
{
    for(int i = 0; i < b; i++)
    {
        c(a[i]);
    }
}

#endif