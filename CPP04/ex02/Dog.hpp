#pragma once
#include "AAnimal.hpp"

class Dog : public AAnimal{
    private:
        Brain *brain;

    public:
        Dog();
        ~Dog();

        Dog(const Dog &other);
        Dog &operator=(const Dog& other);
        Brain *getBrain(void)const;
        void makeSound() const;
        void compareTo(Dog const & other_dog) const;


};
