#pragma once

class Cat : public Animals{
    private:
    public:
    Cat();

    Cat(const Cat &other);
    ~Cat();

    void makeSound() const;

};
