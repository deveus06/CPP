#include "Dog.hpp"

Dog::Dog(){
    this->type = "Dog";
    std::cout << "Default Dog created!" <<std::endl;
    try
    {
        this->brain = new Brain();
    }
    catch(const std::bad_alloc &e)
    {
        std::cout <<"Memory allocation failed";
    }
}
Dog::Dog(const Dog &target)
{
    *this = target;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
    return;
}

void Dog::makeSound() const
{
    std::cout<<"Wouf ! (im hungry)"<<std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout<<"Dog copy called"<<std::endl;
    if(this!=&other)
    {
            this->type = other.type;
            this->brain = new Brain(*other.brain);
    }
    return *this;
}
