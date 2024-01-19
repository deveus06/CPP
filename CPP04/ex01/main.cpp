#include "Animals.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"


int main()
{
    const Animals* meta = new Animals();
    const Animals* dog = new Dog();
    const Animals* cat = new Cat();
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
