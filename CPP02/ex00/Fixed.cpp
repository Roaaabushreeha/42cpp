/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 15:05:28 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/02 13:09:32 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
    {    
        _value = other._value;
        std :: cout <<"Copy assignment operator called\n";
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed :: getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed :: setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

