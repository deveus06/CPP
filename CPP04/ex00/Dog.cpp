#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
    std::cout << "Default Dog created!" <<std::endl;
}
Dog::Dog(const Dog &target)
{
    *this = target;
    std::cout<<"Dog copy constructor called"<<std::endl;
    return;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    return;
}

void Dog::makeSound() const
{
    std::cout<<"Wouf ! (im hungry)"<<std::endl;
}
