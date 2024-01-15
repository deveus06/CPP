#pragma once
#include <iostream>
#include <cmath>
class Fixed {
private:
    int value;
    static const int fractionalBits = 8;

public:
    Fixed();
    Fixed(const int n);
    Fixed(const float n);
    Fixed(const Fixed &other);

    Fixed &operator=(const Fixed &other);

    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void)const;
    int toInt(void)const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );
