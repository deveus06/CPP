#include "Weapon.hpp"

Weapon::Weapon()
{
    std::cout << "Weapon constructor called" << std::endl;
}

Weapon::Weapon(std::string type)
{
    if (!type.empty())
    {
        this->type = type;
    }
    else
    {
        this->type = "bare hand";
    }
}

const std::string &Weapon::getType() const
{
    return this->type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
