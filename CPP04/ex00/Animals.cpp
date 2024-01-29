#include "Animals.hpp"

AAnimal::AAnimal(){
    this->type = "Animal";
    std::cout << "Default Animals created!" <<std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "Animals destructor called" << std::endl;
    return;
}

AAnimal::AAnimal(const AAnimal &target)
{
    *this = target;
    std::cout<<"Animals copy constructor called"<<std::endl;
    return;
}

AAnimal& AAnimal::operator=(const AAnimal &other)
{
    this->type = other.type;
    return *this;
}
const std::string &AAnimal::getType() const
{
    return this->type;
}

void AAnimal::setType(std::string type)
{
    this->type = type;
}

void AAnimal::makeSound() const
{
    std::cout << "This animal is making noise, impossible to define it"<<std::endl;
}
