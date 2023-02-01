#include "Base.hpp"
#include <unistd.h>
#include <iostream>
#include <cstdlib>

int main()
{
	Base *a;
	Base *b;
	Base *c;

	std::srand((unsigned int)std::time(NULL));
	a = generate();
	identify(a);
	identify(*a);
	sleep(std::rand() % 3);
	std::cout << std::endl;
	b = generate();
	identify(b);
	identify(*b);
	sleep(std::rand() % 3);
	std::cout << std::endl;
	c = generate();
	identify(c);
	identify(*c);
	delete a;
	delete b;
	delete c;
	return (0);
}