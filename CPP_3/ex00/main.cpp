#include "ClapTrap.hpp"

int main ()
{
    ClapTrap clapTrap1("Pollo");
    ClapTrap clapTrap2("Roberto");
    ClapTrap clapTrap3("Pino");
    clapTrap1.attack("un albero");
    clapTrap2.takeDamage(5);
    clapTrap2.takeDamage(5);
    clapTrap2.takeDamage(5);
    clapTrap2.takeDamage(5);
    clapTrap2.beRepaired(5);
    clapTrap3.beRepaired(5);
    clapTrap3.beRepaired(5);
    clapTrap3.beRepaired(5);
    clapTrap3.beRepaired(5);
    clapTrap3.beRepaired(5);
    clapTrap3.beRepaired(5);
    clapTrap3.beRepaired(5);
    clapTrap3.beRepaired(5);
    clapTrap3.beRepaired(5);
    clapTrap3.beRepaired(5);
    clapTrap3.beRepaired(5);

    std::cout << "ClapTrap1 name: " << clapTrap1.getName() << std::endl;
    std::cout << "ClapTrap2 name: " << clapTrap2.getName() << std::endl;
    std::cout << "ClapTrap3 name: " << clapTrap3.getName() << std::endl;
    std::cout << "ClapTrap1 hit points: " << clapTrap1.getHitPoints() << std::endl;
    std::cout << "ClapTrap2 hit points: " << clapTrap2.getHitPoints() << std::endl;
    std::cout << "ClapTrap3 hit points: " << clapTrap3.getHitPoints() << std::endl << std::endl;
    std::cout << "ClapTrap1 energy points: " << clapTrap1.getEnergyPoints() << std::endl;
    std::cout << "ClapTrap2 energy points: " << clapTrap2.getEnergyPoints() << std::endl;
    std::cout << "ClapTrap3 energy points: " << clapTrap3.getEnergyPoints() << std::endl << std::endl;
    return 0;
}