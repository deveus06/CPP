#pragma once

class Cat : public Animal{
    private:
    public:
    Cat();

    Cat(const Cat &other);
    ~Cat();

    void makeSound() const;

};
