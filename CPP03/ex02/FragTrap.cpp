#include "FragTrap.hpp"
#include "ClapTrap.hpp"
FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Default FragTrap created!" <<std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->attackDamage = 30;
    this->hitPoints = 100;
    this->energyPoints = 100;

   std::cout << "FragTrap " << name << " is born" << std::endl;
    
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap()
{
    *this = other;
    std::cout << "FragTrap copied" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if ( this->energyPoints <= 0 ) {
        std::cout << "FragTrap" << this->name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->name << " attacks " << target << " at range, causing " << this->attackDamage << " points of damage" << std::endl;
    this->energyPoints -= 1;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
    return;
}

void FragTrap::highFiveGuys()
{
    std::cout<<name<<" Is aking everyone for a High Five !"<<std::endl;
}
