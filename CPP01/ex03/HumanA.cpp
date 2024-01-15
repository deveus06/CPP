#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weapon):weapon(weapon)
{
    if(name.empty())
        this->name = "pablo";
    else
        this->name = name;
}


void    HumanA::attack()
{
        std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
