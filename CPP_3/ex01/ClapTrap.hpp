#include <iostream>

class ClapTrap
{
public:
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const & src);
    ~ClapTrap();
    ClapTrap & operator=(ClapTrap const & rhs);

    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
    int getAttackDamage() const;
private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
};