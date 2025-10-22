/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:19:11 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/12 16:00:29 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
    private :
    T *data;
    unsigned int n;
    public:
    Array();
    Array(unsigned int number);
    Array (const Array &other);
    Array& operator=(const Array &other);
    ~Array();
    const T& operator[](unsigned int index)const;
    T& operator[](unsigned int index);
    unsigned int size()const;
    
};
#include "Array.tpp"
#endif