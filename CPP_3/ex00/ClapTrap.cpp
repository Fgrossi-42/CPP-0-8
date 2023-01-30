#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}


ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

void ClapTrap::attack(std::string const & target)
{
    _energyPoints--;
    if (_energyPoints < 0 || _hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " can't attack!" << std::endl;
        return;
    }
    else
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
        _hitPoints = 0;
        return;
    }
    else
        _hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    _energyPoints--;
    if (_energyPoints < 0 || _hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " can't be repaired!" << std::endl;
        _energyPoints = 0;
        return;
    }
    else
    {
        _hitPoints += amount;  
        std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " points!" << std::endl;
    }

}

std::string ClapTrap::getName() const
{
    return this->_name;
}

int ClapTrap::getHitPoints() const
{
    return this->_hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}

int ClapTrap::getAttackDamage() const
{
    return this->_attackDamage;
}


