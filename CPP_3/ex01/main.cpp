#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clap("Pollo");
    ScavTrap scav("Scav");

    std::cout << "----------------" << std::endl;
    std::cout << "clapTrap name: " << clap.getName() << std::endl;
    std::cout << "clapTrap hit points: " << clap.getHitPoints() << std::endl;
    std::cout << "clapTrap energy points: " << clap.getEnergyPoints() << std::endl;
    std::cout << "clapTrap attack damage: " << clap.getAttackDamage() << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << "ScavTrap name: " << scav.getName() << std::endl;
    std::cout << "ScavTrap hit points: " << scav.getHitPoints() << std::endl;
    std::cout << "ScavTrap energy points: " << scav.getEnergyPoints() << std::endl;
    std::cout << "ScavTrap attack damage: " << scav.getAttackDamage() << std::endl;
    scav.guardGate();

    return 0;
}