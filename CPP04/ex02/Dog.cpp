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

Brain *Dog::getBrain( void ) const
{
	return (this->brain);
}
void Dog::compareTo(Dog const & other_dog) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two dogs\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_dog.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_dog.getBrain())->getIdeas())[i] << std::endl;
	std::cout << std::endl;
}
