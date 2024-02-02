#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    const WrongAnimal* Wrongcat = new WrongCat();
    

    std::cout << dog->getType() << " " <<std::endl;
    dog->makeSound();

    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();

    std::cout << meta->getType() << " " << std::endl;
    meta->makeSound();

    std::cout << Wrongcat->getType() << " " <<std::endl;
    Wrongcat->makeSound();

    delete meta;
    delete cat;
    delete dog;
    delete Wrongcat;

    return(0);
}
