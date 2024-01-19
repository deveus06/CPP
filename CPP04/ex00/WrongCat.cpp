#include "WrongCat.hpp"

WrongCat::WrongCat(){
    this->type = "WrongCat";
    std::cout << "Default WrongCat created!" <<std::endl;
}


WrongCat::WrongCat(const WrongCat &target)
{
    *this = target;
    std::cout<<"WrongCat copy constructor called"<<std::endl;
    return;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
    return;
}

void WrongCat::makeSound() const
{
    std::cout<<"Meow ! (im hungry)"<<std::endl;
}
