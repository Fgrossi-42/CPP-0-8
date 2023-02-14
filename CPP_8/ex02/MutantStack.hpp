#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

template <typename T>

class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(MutantStack const &other) : std::stack<T>(other) {}
        virtual ~MutantStack() {}
        MutantStack &operator=(MutantStack const &other)
        {
            if (this != &other)
                std::stack<T>::operator=(other);
            return *this;
        }
        typedef typename std::deque<T>::iterator iterator;
        iterator begin() { return std::stack<T>::c.begin(); }
        iterator end() { return std::stack<T>::c.end(); }
};

#endif