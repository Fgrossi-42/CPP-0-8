#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(std::string name);
    FragTrap(FragTrap const & src);
    ~FragTrap();
    FragTrap & operator=(FragTrap const & rhs);

    void highFivesGuys(void);

private:
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
};