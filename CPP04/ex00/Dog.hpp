#pragma once

class Dog : public Animal{
    private:
    public:
    Dog();

    Dog(const Dog &other);
    ~Dog();

    void makeSound() const;

};
