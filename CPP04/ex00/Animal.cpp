#include "Animal.hpp"

Animal::Animal(){
    this->type = "Animal";
    std::cout << "Default Animal created!" <<std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
    return;
}

Animal::Animal(const Animal &target)
{
    *this = target;
    std::cout<<"Animal copy constructor called"<<std::endl;
    return;
}

Animal& Animal::operator=(const Animal &other)
{
    this->type = other.type;
    return *this;
}
const std::string &Animal::getType() const
{
    return this->type;
}

void Animal::setType(std::string type)
{
    this->type = type;
}

void Animal::makeSound() const
{
    std::cout << "This animal is making noise, impossible to define it"<<std::endl;
}
