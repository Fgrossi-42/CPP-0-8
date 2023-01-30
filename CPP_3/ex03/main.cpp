#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap clap("Pollo");
    ScavTrap scav("Scav");
    FragTrap frag("Kai");
    DiamondTrap diamond("Diamond");

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
    std::cout << "----------------" << std::endl;
    std::cout << "FragTrap name: " << frag.getName() << std::endl;
    std::cout << "FragTrap hit points: " << frag.getHitPoints() << std::endl;
    std::cout << "FragTrap energy points: " << frag.getEnergyPoints() << std::endl;
    std::cout << "FragTrap attack damage: " << frag.getAttackDamage() << std::endl;
    frag.HighFivesGuys();
    std::cout << "----------------" << std::endl;
    std::cout << "DiamondTrap name: " << diamond.getName() << std::endl;
    std::cout << "DiamondTrap hit points: " << diamond.getHitPoints() << std::endl;
    std::cout << "DiamondTrap energy points: " << diamond.getEnergyPoints() << std::endl;
    std::cout << "DiamondTrap attack damage: " << diamond.getAttackDamage() << std::endl;
    diamond.whoAmI();
    std::cout << std::endl<< std::endl << std::endl;
    return 0;
}