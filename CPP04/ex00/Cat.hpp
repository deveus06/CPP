#pragma once

class Cat : public AAnimal{
    private:
    public:
    Cat();

    Cat(const Cat &other);
    ~Cat();

    void makeSound() const;

};
