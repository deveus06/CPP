#include "Fixed.hpp"
int main()
{
    Fixed a(1.5f);
    Fixed const b(2);

    std::cout<<"Maths Operations :"<<std::endl;
    std::cout << a + b <<std::endl;
    std::cout << a - b <<std::endl;
    std::cout << a * b <<std::endl;
    std::cout << a / b <<std::endl;
    std::cout<<"---------"<<std::endl;


    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    return 0;
}
