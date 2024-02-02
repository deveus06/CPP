#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(){
    this->type = "Cat";
    std::cout << "Default Cat created!" <<std::endl;
}


Cat::Cat(const Cat &target)
{
    *this = target;
    std::cout<<"Cat copy constructor called"<<std::endl;
    return;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    return;
}

void Cat::makeSound() const
{
    std::cout<<"Meow ! (im hungry)"<<std::endl;
}
