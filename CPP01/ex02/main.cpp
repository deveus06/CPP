#include <iostream>
#include <string>

int main() {
    std::string myString = "HI THIS IS BRAIN";
    std::string *stringPTR = &myString;
    std::string &stringREF = myString;

    //adress :
    std::cout << "Adresse de la string en mémoire: " << &myString << std::endl;
    std::cout << "Adresse stockée dans stringPTR: " << stringPTR << std::endl;
    std::cout << "Adresse stockée dans stringREF: " << &stringREF << std::endl;

    std::cout << std::endl;

    //values :
    std::cout << "Valeur de la string: " << myString << std::endl;
    std::cout << "Valeur pointée par stringPTR: " << *stringPTR << std::endl;
    std::cout << "Valeur pointée par stringREF: " << stringREF << std::endl;

    return 0;
}
