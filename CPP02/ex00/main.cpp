#include <iostream>

class Fixed {
private:
    int value;
    static const int fractionalBits = 8;

public:
    Fixed() : value(0) {
        std::cout<<"Default constructor called"<<std::endl;
    }

    Fixed(const Fixed &other) : value(other.value) {
        std::cout<<"Copy constructor called"<<std::endl;
    }

    Fixed &operator=(const Fixed &other) {
        std::cout<<"Copy assignment operator called"<<std::endl;
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }

    ~Fixed() {
        std::cout<<"destructor called"<<std::endl;
    }

    int getRawBits() const {
        std::cout<<"getRawBits member function called"<<std::endl;
        return value;
    }

    void setRawBits(int const raw) {
        value = raw;
    }
};

int main() {
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}
