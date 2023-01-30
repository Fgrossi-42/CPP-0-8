#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_name = name;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = obj;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj)
{
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	this->_name = obj._name;
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << this->_name << " is actually ClapTrap " << this->ClapTrap::_name << std::endl;
}