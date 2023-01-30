#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        using FragTrap::_hitPoints;
		using FragTrap::_attackDamage;
		using ScavTrap::_energyPoints;
		using ScavTrap::attack;

        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const & src);
        ~DiamondTrap(void);
        DiamondTrap & operator=(DiamondTrap const & rhs);
        void whoAmI(void);
    private:
        std::string _name;
};

#endif