#include "Harl.hpp"

int	main(void)
{
	Harl	Harl;

	Harl.complain("debug");
	Harl.complain("not a message");
	Harl.complain("info");
	Harl.complain("warning");
	Harl.complain("error");
	return (0);
}