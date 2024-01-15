#include "HumanB.hpp"

HumanB::HumanB()
{
    this->name = "default";
    this->weapon = NULL;
}

HumanB::HumanB(std::string name)
{
   if(name.empty())
        this->name = "bobert";
    else
        this->name = name;
    this->weapon = NULL;
}

void    HumanB::setWeapon(Weapon *weapon)
{
    this->weapon = weapon;
}
void    HumanB::attack()
{
    if(!(this->weapon))
        std::cout << "No weapon to attack with ..." << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
