#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>
# include <cmath>

class Convert
{
    public:
    Convert(std::string str);
    ~Convert();

    int     intero;
    char    carattere;
    float   flottante;
    double  doppio;
    std::string stringa;
};

int ConvertToInt(std::string str);
char ConvertToChar(std::string str);
float ConvertToFloat(std::string str);
double ConvertToDouble(std::string str);
void PrintValues(Convert *convert);

#endif