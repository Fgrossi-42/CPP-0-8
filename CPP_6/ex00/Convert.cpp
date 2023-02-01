#include "Convert.hpp"

Convert::Convert(std::string str)
{
    intero = 0;
    carattere = 0;
    flottante = 0;
    doppio = 0;
    stringa = str;
}

Convert::~Convert()
{
}

int ConvertToInt(std::string str)
{
    int i;
    std::stringstream ss(str);
    ss >> i;
    return i;
}

char ConvertToChar(std::string str)
{
    int i;
    std::stringstream ss(str);
    ss >> i;
    return char(i);
}

float ConvertToFloat(std::string str)
{
    int i = 0;
    float f;

    while(str[i] != '\0')
        i++;
    if (str[i - 1] == 'f')
        str[i - 1] = '\0';
    std::stringstream ss(str);
    ss >> f;
    return f;
}

double ConvertToDouble(std::string str)
{
    int i = 0;
    double d;

    while(str[i] != '\0')
        i++;
    if (str[i - 1] == 'f')
        str[i - 1] = '\0';
    std::stringstream ss(str);
    ss >> d;
    return d;
}

void PrintValues(Convert *convert)
{
    std::cout << "char: ";
    if (convert->stringa.length() == 1 && !isdigit(convert->stringa[0]))
        std::cout << convert->stringa[0] << std::endl;
    else if (convert->intero >= 32 && convert->intero <= 126)
        std::cout << convert->carattere << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "int: ";
    if (convert->stringa.length() == 1 && !isdigit(convert->stringa[0]))
        std::cout << "impossible" << std::endl;
    else
        std::cout << convert->intero << std::endl;
    std::cout << "float: ";
    if (convert->stringa.length() == 1 && !isdigit(convert->stringa[0]))
        std::cout << "impossible" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(4) << convert->flottante << "f" << std::endl;
    std::cout << "double: ";
    if (convert->stringa.length() == 1 && !isdigit(convert->stringa[0]))
        std::cout << "impossible" << std::endl;
    else
        std::cout << std::fixed << std::setprecision(4) << convert->doppio << std::endl;
}