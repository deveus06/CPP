#pragma once

class Dog : public Animals{
    private:
    public:
    Dog();

    Dog(const Dog &other);
    ~Dog();

    void makeSound() const;

};
