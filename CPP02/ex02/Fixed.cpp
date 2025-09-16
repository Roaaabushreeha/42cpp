/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:15:45 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/01 19:20:26 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int value)
{
    _value = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
    _value = static_cast<int>(roundf(value * (1 << _fractionalBits)));
}
Fixed :: Fixed()
{
    _value = 0;
}

Fixed:: Fixed(const Fixed &other)
{
    _value = other._value;
}
Fixed& Fixed::operator=(const Fixed &other)
{
    if (this != &other)
        _value = other._value;
    return *this;
}

Fixed::~Fixed()
{}

float Fixed::toFloat(void) const
{
    return((float)_value / (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
    return (_value>>_fractionalBits);
}
 bool Fixed:: operator>(const Fixed& other) const
 {
    return this->_value > other._value;
 }
bool Fixed:: operator<(const Fixed& other)const
{
    return this->_value < other._value;
}
bool Fixed::operator>=(const Fixed& other)const
{
    return this->_value >= other._value;
}
bool Fixed:: operator<=(const Fixed& other)const
{
    return this->_value <= other._value;
}
bool Fixed:: operator!=(const Fixed& other)const
{
    return this->_value != other._value;
}
bool Fixed:: operator==(const Fixed& other)const
{
    return this->_value == other._value;
}






Fixed Fixed:: operator+(const Fixed& other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}
Fixed Fixed:: operator-(const Fixed& other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}
Fixed Fixed:: operator*(const Fixed& other) const
{
    return Fixed(this->toFloat() * other.toFloat());
} 
Fixed Fixed:: operator/(const Fixed& other) const
{
    return Fixed(this->toFloat() / other.toFloat());
} 



 Fixed& Fixed:: operator++()
{
    _value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    _value++;
    return temp;
}

 Fixed  Fixed::operator--(int)
{
     Fixed  temp (_value);
    _value--;
    return temp;
}

 Fixed& Fixed:: operator--()
{
    _value--;
    return *this;
}

//This creates a new Fixed object (copy) of either a or b.
//That means:
//More memory + more CPU (extra copy).
//You can’t modify the original object through the result.
Fixed& Fixed :: min(Fixed &a, Fixed &b) 
{
    if (a < b)
        return a;
    else 
        return b;
}
Fixed& Fixed ::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    else 
        return b;
}

//his does not copy anything.
//It just returns a reference (alias) to whichever object (a or b) is smaller.
//So if you modify the returned object, you’re modifying the original

const Fixed& Fixed ::min(const Fixed &a, const Fixed &b)
{
     if (a < b)
        return a;
    else 
        return b;
}

const Fixed& Fixed :: max(const Fixed &a, const Fixed &b)
{
     if (a > b)
        return a;
    else 
        return b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}
