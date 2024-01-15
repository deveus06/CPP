#include "Fixed.hpp"

Fixed ::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed ::Fixed(const int n) : value(n << fractionalBits)
{
    std::cout << "Int constructor called" << std::endl;
}
Fixed ::Fixed(const float n) : value(std::roundf(n * (1<<fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
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

float Fixed::toFloat() const
{
    return static_cast<float>(this->getRawBits()) / (1 << fractionalBits);
}

int Fixed:: toInt()const
{
    return this->value >> fractionalBits;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i) 
{
    o << i.toFloat();
    return o;
}
