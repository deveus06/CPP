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

    bool operator>(const Fixed &other)const;
    bool operator<(const Fixed &other)const;
    bool operator<=(const Fixed &other)const;
    bool operator>=(const Fixed &other)const;
    bool operator==(const Fixed &other)const;
    bool operator!=(const Fixed &other)const;

    Fixed operator+(const Fixed &other)const;
    Fixed operator-(const Fixed &other)const;
    Fixed operator*(const Fixed &other)const;
    Fixed operator/(const Fixed &other)const;

    Fixed &operator++(void);
    Fixed operator++(int);
    Fixed &operator--(void);
    Fixed operator--(int);

    static Fixed& min(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);


    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void)const;
    int toInt(void)const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );
