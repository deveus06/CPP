#include "Animals.hpp"

Animals::Animals(){
    this->type = "Animal";
    std::cout << "Default Animals created!" <<std::endl;
}

Animals::~Animals()
{
    std::cout << "Animals destructor called" << std::endl;
    return;
}

Animals::Animals(const Animals &target)
{
    *this = target;
    std::cout<<"Animals copy constructor called"<<std::endl;
    return;
}

Animals& Animals::operator=(const Animals &other)
{
    this->type = other.type;
    return *this;
}
const std::string &Animals::getType() const
{
    return this->type;
}

void Animals::setType(std::string type)
{
    this->type = type;
}

void Animals::makeSound() const
{
    std::cout << "This animal is making noise, impossible to define it"<<std::endl;
}
