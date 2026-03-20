#include "Fixed.hpp"

Fixed::Fixed() : rawBits(0) {}

Fixed::Fixed(const Fixed& other) {
    *this = other;
}

Fixed::Fixed(float const raw) {
    rawBits = static_cast<int>(raw * (1 << fractionalBits) + (raw >= 0 ? 0.5f : -0.5f));
}

Fixed::Fixed(int const raw) {
    rawBits = raw << fractionalBits;
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        rawBits = other.rawBits;
    }
    return *this;
}

int Fixed::getRawBits() const {
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
