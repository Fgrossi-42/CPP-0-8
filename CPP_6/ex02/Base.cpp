#include "Base.hpp"

Base * generate(void)
{
	std::srand((unsigned int)std::time(NULL));
	switch (std::rand() % 3)
	{
		case 0:
			std::cout << "Generated: A" << std::endl;
			return new A;
		case 1:
			std::cout << "Generated: B" << std::endl;
			return new B;
		case 2:
			std::cout << "Generated: C" << std::endl;
			return new C;
	}
	return (0);
}

void identify(Base* p)
{
	std::cout << "Pointer: ";
	A* ptrA = dynamic_cast <A*> (p);
	B* ptrB = dynamic_cast <B*> (p);
	C* ptrC = dynamic_cast <C*> (p);
	if (ptrA)
		std::cout << "Type: A" << std::endl;
	else if (ptrB)
		std::cout << "Type: B" << std::endl;
	else if (ptrC)
		std::cout << "Type: C" << std::endl;
	else
		std::cout << "Tipo non trovato" << std::endl;
}

void identify(Base& p)
{
	std::cout << "Reference: ";
	try
	{
		A ptrA = dynamic_cast <A&> (p);
		std::cout << "Type: A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B ptrB = dynamic_cast <B&> (p);
			std::cout << "Type: B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C ptrC = dynamic_cast <C&> (p);
				std::cout << "Type: C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "Type not found" << std::endl;
			}
		}
	}
}
