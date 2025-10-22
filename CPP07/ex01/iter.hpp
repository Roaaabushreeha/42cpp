/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 13:39:21 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/12 19:01:43 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include<iostream>
#include <string>

template<typename T , typename F>

void iter(T *arr,const size_t length,F f)
{
    for(size_t i =0;i<length;i++)
    {
        f(arr[i]);
    }
}
template<typename T>
void printfunction(T &x)
{
    std ::cout<<x<<std ::endl; 
}
#endif
//Why it must be written before every function template
//Each template function is independent. The compiler does not automatically inherit T from other templates
//Each one needs its own template <typename T>
//Otherwise, the compiler doesn’t know what T means in that function.