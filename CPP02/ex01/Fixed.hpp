#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed(int const raw);
    Fixed(float const raw);
    ~Fixed();
    Fixed& operator=(const Fixed& other);

    static Fixed&       min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed&       max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);

    float toFloat() const;
    int toInt() const;
    int getRawBits() const;
    void setRawBits(int const raw);
private:
    int rawBits;
    static const int fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
