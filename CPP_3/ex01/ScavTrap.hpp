#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap();
    ScavTrap & operator=(ScavTrap const & rhs);

    void guardGate(void);

private:
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
};