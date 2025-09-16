/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 18:14:50 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/01 18:54:56 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int value)
{
    _value = value << _fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
    _value = static_cast<int>(roundf(value * (1 << _fractionalBits)));
    std::cout << "Float constructor called" << std::endl;
}
Fixed :: Fixed()
{
    _value = 0;
    std :: cout << "Default constructor called\n";
}

Fixed:: Fixed(const Fixed &other)
{
    _value = other._value;
    std :: cout << "Copy constructor called\n";    
}
Fixed& Fixed::operator=(const Fixed &other)
{
    if (this != &other)
        _value = other._value;
    std :: cout <<"Copy assignment operator called\n";
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return((float)_value / (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
        return (_value>>_fractionalBits);
}

//But for your custom class, like Fixed, the compiler doesn’t know what +, <<, or == should mean.
//operator<< → for printing
std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();//convert Fixed → float → send to output stream
    return os;
}


