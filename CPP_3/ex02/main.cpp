#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scav("Kai");
    scav.attack("a homeless man");
    scav.takeDamage(5);
    scav.takeDamage(5);
    scav.takeDamage(5);
    scav.takeDamage(5);
    scav.beRepaired(5);
    scav.attack("a homeless man even harder");
    scav.guardGate();
    std::cout << "----------------" << std::endl;
    std::cout << "ScavTrap name: " << scav.getName() << std::endl;
    std::cout << "ScavTrap hit points: " << scav.getHitPoints() << std::endl;
    std::cout << "ScavTrap energy points: " << scav.getEnergyPoints() << std::endl;
    return 0;
}