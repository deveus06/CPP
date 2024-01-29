#pragma once

class Dog : public AAnimal{
    private:
    public:
    Dog();

    Dog(const Dog &other);
    ~Dog();

    void makeSound() const;

};
