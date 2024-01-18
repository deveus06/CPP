#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default ScavTrap created!" <<std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->attackDamage = 20;
    this->hitPoints = 100;
    this->energyPoints = 50;

   std::cout << "ScavTrap " << name << " is born" << std::endl;
    
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap()
{
    *this = other;
    std::cout << "ScavTrap copied" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if ( this->energyPoints <= 0 ) {
        std::cout << "ScavTrap " << this->name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->name << " attacks " << target << " at range, causing " << this->attackDamage << " points of damage" << std::endl;
    this->energyPoints -= 1;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
    return;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap "<<name<<" Gatekeeper mode activated"<<std::endl;
}
