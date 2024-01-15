#include <iostream>

class Fixed {
private:
    int value;
    static const int fractionalBits = 8;

public:
    // Default constructor
    Fixed() : value(0) {}

    // Copy constructor
    Fixed(const Fixed &other) : value(other.value) {}

    // Assignment operator overloading
    Fixed &operator=(const Fixed &other) {
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }

    // Destructor
    ~Fixed() {}

    // Getter for raw bits
    int getRawBits() const {
        return value;
    }

    // Setter for raw bits
    void setRawBits(int const raw) {
        value = raw;
    }
};

int main() {
    // Example usage
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}
