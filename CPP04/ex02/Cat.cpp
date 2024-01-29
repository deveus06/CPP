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

Brain *Cat::getBrain( void ) const
{
	return (this->brain);
}

void Cat::compareTo(Cat const & other_cat) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two cats\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_cat.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_cat.getBrain())->getIdeas())[i] << std::endl;
	std::cout << std::endl;
}
