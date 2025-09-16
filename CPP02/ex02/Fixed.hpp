/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:03:17 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/01 19:16:16 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>
class   Fixed
{
    private :
        int _value;
        static const int  _fractionalBits = 8;
    public :
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed (const Fixed& other);
    float toFloat(void) const;
    int   toInt(void) const;
    Fixed& operator=(const Fixed &other);
    ~Fixed();
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other)const;
    bool operator>=(const Fixed& other)const;
    bool operator<=(const Fixed& other)const;
    bool operator!=(const Fixed& other)const;
    bool operator==(const Fixed& other)const;

    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const; 
    Fixed operator/(const Fixed& other) const; 

    Fixed& operator++();
    Fixed operator++(int);
    Fixed operator--(int);
    Fixed& operator--();

    Fixed& min(Fixed &a, Fixed &b);
    Fixed& max(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed &a, const Fixed &b);
    static const Fixed& max(const Fixed &a, const Fixed &b);
};
std :: ostream& operator<<(std::ostream& os, const Fixed& obj);
#endif
