#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain created!" <<std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
    return;
}

Brain::Brain(const Brain &target)
{
    *this = target;
}

Brain& Brain::operator=(const Brain &other)
{
    std::cout<<"Brain copy called"<<std::endl;
    if(this!=&other)
    {
        for(int i = 0; i < 100 ;i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

std::string *Brain::getIdeas()
{
    return (this->ideas);
}
