#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    (void)argc;
    BitcoinExchange bitcoin;
    bitcoin.read_file(argv);
    bitcoin.read_db();
	bitcoin.remove_spaces();
    bitcoin.compare_dates();
}