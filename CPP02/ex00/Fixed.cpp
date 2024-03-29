#include "Fixed.hpp"

Fixed ::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(other.getRawBits());
}

Fixed &Fixed :: operator=(const Fixed &other) 
{
        std::cout<<"Copy assignment operator called"<<std::endl;
        if (this != &other) {
            value = other.value;
        }
        return *this;
}
Fixed::~Fixed()
{
    std::cout << "destructor called" << std::endl;
}
int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

