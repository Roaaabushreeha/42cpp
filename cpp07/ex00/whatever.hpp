/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:43:30 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/11 13:34:08 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>
template <typename T>
void swap(T &a,T &b)
{
    T temp=a;
    a = b;
    b = temp;
}
template <typename T>
T &min(T &a,T &b)
{
    if (a > b)
        return b;
    else if (b > a)
        return a;
    return b;
}
template <typename T>
T &max(T &a,T &b)
{
    if (a < b)
        return b;
    else if (a > b)
        return a;
    return b;
} 
// std::ostream& operator<<(std::ostream& os, const Fixed& obj);
// std ::ostream& operator<<(std :: ostream&,)
#endif