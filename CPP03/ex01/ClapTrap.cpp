#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default") ,hitPoints(10),energyPoints(10),attackDamage(0){
    std::cout << "Default ClapTrap created!" <<std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name) ,hitPoints(10),energyPoints(10),attackDamage(0)
{
    std::cout << "ClapTrap " << name << " is born" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &target)
{
    *this = target;
    std::cout<<"ClapTrap copy constructor called"<<std::endl;
    return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if(energyPoints <= 0)
    {
        std::cout<<"ClapTrap "<<name<<" is out of energy"<<std::endl;
        return;
    }
    if(isDead == 1)
    {
        std::cout<<"ClapTrap "<<name<<" is dead, cant attack"<<std::endl;
        return;
    }
    std::cout<<"ClapTrap "<<name<<" attack "<<target<<" for "<<attackDamage<<" damage"<<std::endl;
    energyPoints -= 1;  
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(isDead == 1)
        return;
    if(hitPoints <= amount)
    {
        std::cout<<"ClapTrap "<<name<<" is dead"<<std::endl;
        isDead = 1;
        return;
    }
    std::cout<<"ClapTrap "<<name<<" take "<<amount<<" damage"<<std::endl;
    hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(energyPoints <= amount)
    {
        std::cout<<"ClapTrap "<<name<<" is out of energy "<<std::endl;
        return;
    }
    std::cout<<"ClapTrap "<<name<<" is repaired for "<<amount<<" hit points"<<std::endl;
    hitPoints += amount;
    energyPoints -= 1;
}

void ClapTrap::print_infos()
{
    std::cout << "\n-----------[INFORMATIONS]---------\n"<<"Name : "<<name<<"\nHP : "<<hitPoints<<"\nEnergy points : "<<energyPoints<<"\nAttack Damage : "
        <<attackDamage<<"\n\n"<<std::endl;
}
