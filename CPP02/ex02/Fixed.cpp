#include "Fixed.hpp"

Fixed ::Fixed() : value(0)
{
    //std::cout << "Default constructor called" << std::endl;
}
Fixed ::Fixed(const int n) : value(n << fractionalBits)
{
    //std::cout << "Int constructor called" << std::endl;
}
Fixed ::Fixed(const float n) : value(std::roundf(n * (1<<fractionalBits)))
{
    //std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed :: operator=(const Fixed &other) 
{
        //std::cout<<"Copy assignment operator called"<<std::endl;
        if (this != &other) {
            value = other.value;
        }
        return *this;
}

Fixed::~Fixed()
{
   // std::cout << "destructor called" << std::endl;
}
int Fixed::getRawBits() const
{
    //std::cout << "getRawBits member function called" << std::endl;
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

//------------comparaison operators overload-------------//
bool Fixed :: operator>(const Fixed &other) const
{
    return this->getRawBits() > other.getRawBits();
}
bool Fixed :: operator<(const Fixed &other) const
{
    return this->getRawBits() < other.getRawBits();
}
bool Fixed :: operator<=(const Fixed &other) const
{
    return this->getRawBits() <= other.getRawBits();
}
bool Fixed :: operator>=(const Fixed &other) const
{
    return this->getRawBits() >= other.getRawBits();
}
bool Fixed :: operator==(const Fixed &other) const
{
    return this->getRawBits() == other.getRawBits();
}
bool Fixed :: operator!=(const Fixed &other) const
{
    return this->getRawBits() == other.getRawBits();
}

//------------arithmetic operator overload----------//

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed tmp;
    tmp.setRawBits(this->getRawBits() + other.getRawBits());
    return tmp;
}
Fixed Fixed::operator-(const Fixed &other) const
{
   Fixed tmp;
    tmp.setRawBits(this->getRawBits() - other.getRawBits());
    return tmp;
}
Fixed Fixed::operator*(const Fixed &other) const
{
    return this->toFloat() * other.toFloat();
}
Fixed Fixed::operator/(const Fixed &other) const
{
    return this->toFloat() / other.toFloat();
}

//------------increment / decrement operators ------------//

Fixed& Fixed::operator++(void)
{
    ++this->value;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed temp = *this;
    temp.value = this->value++;
    return temp;
}

Fixed& Fixed::operator--(void)
{
    --this->value;
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed temp = *this;
    temp.value = this->value--;
    return temp;
}

//----------------Max and Min------------//

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if(a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed &a,const Fixed &b)
{
    if(a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if(a.getRawBits() > b.getRawBits())
        return a;
    return b;
}
const Fixed& Fixed::max(const Fixed &a,const Fixed &b)
{
    if(a.getRawBits() > b.getRawBits())
        return a;
    return b;
}
