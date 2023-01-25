#include "Zombie.hpp"

void	Zombie::announce( void ) const
{
	std::cout << this->_name << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{

}

void	Zombie::set_name(std::string new_name)
{
	this->_name = new_name;
}

Zombie::Zombie(std::string name) : _name(name)
{
	announce();
}

Zombie::~Zombie()
{
	std::cout << "dead " << this->_name << std::endl;
}