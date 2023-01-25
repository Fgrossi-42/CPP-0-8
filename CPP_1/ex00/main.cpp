#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie1("Stack Zombie");
	Zombie	*zombie2 = newZombie("Heap Zombie");

	randomChump("Random Chump Zombie");
	delete zombie2;
	return (0);
}