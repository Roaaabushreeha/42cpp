/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:43:27 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/12 16:05:35 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <stdexcept>
template <typename T>
Array<T>:: Array()
{
    data=NULL;
    n=0;
}
template <typename T>
Array<T>::Array(unsigned int number)
{
    n = number;
    data = new T[n];
}
template <typename T>
 Array<T>::Array (const Array &other)
 {
    n=other.n;
    if (n == 0)
        data = NULL;
    else
    {
        data = new T[n];
        for (size_t i = 0; i < n; i++)
            data[i]=other.data[i];
    }
 }
 
template <typename T>
Array<T> &Array<T>:: operator=(const Array &other)
{
    if (this != &other)
    {
        delete [] data;
        n = other.n;
         data = new T[n];
        for (size_t i = 0; i < n; i++)
        {
            data[i]=other.data[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>:: ~Array()
{
    delete [] data;
}
//const value
template <typename T>
const T& Array<T>:: operator[](unsigned int index)const
{
    if(index>=n)
        throw std :: out_of_range("Array index out of bounds");
    return data[index];
}
//non const value
template <typename T>
T& Array<T>:: operator[](unsigned int index)
{
    if(index>=n)
        throw std :: out_of_range("Array index out of bounds");
    return data[index];   
}
template <typename T>
unsigned int Array<T>:: size()const
{
    return n;
}
//we wrote Array<T> That this function belongs to a template class
//What type the function is templated on.
