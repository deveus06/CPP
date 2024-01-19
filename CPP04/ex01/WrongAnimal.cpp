#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    this->type = "Animal";
    std::cout << "Default WrongAnimal created!" <<std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
    return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &target)
{
    *this = target;
    std::cout<<"WrongAnimal copy constructor called"<<std::endl;
    return;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    this->type = other.type;
    return *this;
}
const std::string &WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "This animal is making noise, impossible to define it"<<std::endl;
}
