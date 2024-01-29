#pragma once
#include "AAnimal.hpp"

class Cat : public AAnimal{
    private:
    Brain* brain;

    public:
        Cat();
        ~Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat& other);

        Brain *getBrain(void)const;
        void makeSound() const;
        void compareTo(Cat const & other_cat) const;
};


