#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string	&stringREF = str;
	std::cout << std::endl;
	
	std::cout << "Address of the string: " << std::endl << std::endl;
	std::cout << "the string: " << &str << std::endl;
	std::cout << "string pointer: " << stringPTR << std::endl;
	std::cout << "string reference: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of the string: " << std::endl << std::endl;
	std::cout << "the string: " << str << std::endl;
	std::cout << "string pointer: " << *stringPTR << std::endl;
	std::cout << "string reference: " << stringREF << std::endl;
	
	std::cout << std::endl;
	return (0);
}