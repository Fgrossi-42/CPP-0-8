#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

struct Data
{
    std::string s1;
    int n;
    std::string s2;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif