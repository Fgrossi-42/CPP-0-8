#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return 1;
    }
    Convert *convert = new Convert(argv[1]);
    convert->stringa = argv[1];
    convert->intero = ConvertToInt(argv[1]);
    convert->carattere = ConvertToChar(argv[1]);
    convert->flottante = ConvertToFloat(argv[1]);
    convert->doppio = ConvertToDouble(argv[1]);
    PrintValues(convert);
    delete convert;
    return 0;
}