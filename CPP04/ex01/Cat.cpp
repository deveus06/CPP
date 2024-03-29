#include "Cat.hpp"

Cat::Cat(){
    this->type = "Cat";
    std::cout << "Default Cat created!" <<std::endl;
    try
    {
        this->brain = new Brain();
    }
    catch(const std::bad_alloc &e)
    {
        std::cout <<"Memory allocation failed";
    }
}


Cat::Cat(const Cat &target)
{
    *this = target;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
    return;
}
Cat& Cat::operator=(const Cat &other)
{
    std::cout<<"Cat copy called"<<std::endl;
    if(this!=&other)
    {
            this->type = other.type;
            this->brain = new Brain(*other.brain);
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout<<"Meow ! (im hungry)"<<std::endl;
}
