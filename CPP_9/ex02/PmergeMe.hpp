#ifndef PmergeMe_HPP
# define PmergeMe_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <sstream>
# include <cctype>
# include <algorithm>
# include <deque>
# include <time.h>

// The name of the program is PmergeMe.
// • Your program must be able to use a positive integer sequence as argument.
// • Your program must use a merge-insert sort algorithm to sort the positive integer
// sequence.
// • If an error occurs during program execution, an error message should be displayed
// on the standard output.

// On the first line you must display an explicit text followed by the unsorted positive
// integer sequence.
// • On the second line you must display an explicit text followed by the sorted positive
// integer sequence.
// • On the third line you must display an explicit text indicating the time used by
// your algorithm by specifying the first container used to sort the positive integer
// sequence.
// • On the last line you must display an explicit text indicating the time used by
// your algorithm by specifying the second container used to sort the positive integer
// sequence.

class PmergeMe
{
    private:

    public:
    PmergeMe();
    ~PmergeMe();
    void setstack(char **argv);
    void printstack();
    float getcurrenttime();
};

#endif