#include "Fixed.hpp"

Fixed::Fixed() : rawBits(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(float const raw) {
    std::cout << "Float constructor called" << std::endl;
    rawBits = static_cast<int>(raw * (1 << fractionalBits) + (raw >= 0 ? 0.5f : -0.5f));
}

Fixed::Fixed(int const raw) {
    std::cout << "Int constructor called" << std::endl;
    rawBits = raw << fractionalBits;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        rawBits = other.rawBits;
    }
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return rawBits;
}

void Fixed::setRawBits(int const raw) {
    rawBits = raw;
}

float Fixed::toFloat() const {
    return static_cast<float>(rawBits) / (1 << fractionalBits);
}

int Fixed::toInt() const {
    return rawBits >> fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

bool Fixed::operator>(const Fixed& other) const  { return rawBits >  other.rawBits; }
bool Fixed::operator<(const Fixed& other) const  { return rawBits <  other.rawBits; }
bool Fixed::operator>=(const Fixed& other) const { return rawBits >= other.rawBits; }
bool Fixed::operator<=(const Fixed& other) const { return rawBits <= other.rawBits; }
bool Fixed::operator==(const Fixed& other) const { return rawBits == other.rawBits; }
bool Fixed::operator!=(const Fixed& other) const { return rawBits != other.rawBits; }

Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result.rawBits = rawBits + other.rawBits;
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result.rawBits = rawBits - other.rawBits;
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    result.rawBits = static_cast<int>((static_cast<long long>(rawBits) * other.rawBits) >> fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
    Fixed result;
    result.rawBits = static_cast<int>((static_cast<long long>(rawBits) << fractionalBits) / other.rawBits);
    return result;
}

Fixed& Fixed::operator++() { ++rawBits; return *this; }
Fixed  Fixed::operator++(int) { Fixed tmp(*this); ++rawBits; return tmp; }
Fixed& Fixed::operator--() { --rawBits; return *this; }
Fixed  Fixed::operator--(int) { Fixed tmp(*this); --rawBits; return tmp; }

Fixed&       Fixed::min(Fixed& a, Fixed& b)             { return a < b ? a : b; }
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) { return a < b ? a : b; }
Fixed&       Fixed::max(Fixed& a, Fixed& b)             { return a > b ? a : b; }
const Fixed& Fixed::max(const Fixed& a, const Fixed& b) { return a > b ? a : b; }
