/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:55:33 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/27 12:48:55 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

 Span::Span()
 {
    N=0;
 }
 Span::Span(unsigned int num)
 {
    N=num;
 }
Span::Span(const Span &other)
{
    this->N = other.N;
    this->vec = other.vec;
}
Span& Span :: operator=(const Span &other)
{
    if (this!=&other)
    {
        this->N = other.N;
        this->vec = other.vec;
    }
    return *this;
}
Span::~Span()
{
}


 void Span :: addNumber(int number)
 {
        if(vec.size()==N)
        {
            throw std :: runtime_error("there is no space left (capacity full)");
        }
        vec.push_back(number);
 }
int Span :: shortestSpan()
{
    if (vec.empty() || vec.size()<2)
        throw std :: runtime_error("the contanir is empty");
    std :: vector <int> temp= vec;
    std :: sort(temp.begin(),temp.end());
     int shortest = std::numeric_limits<int>::max();

    for (size_t i = 1; i < temp.size(); i++)
    {
        int n = temp[i] - temp[i - 1];
        if (n < shortest)
            shortest = n;
    }
    return shortest;
}
int Span :: longestSpan()
{
     if (vec.empty() || vec.size()<2)
        throw std :: runtime_error("the contanir is empty");
    std :: vector <int> temp= vec;
    std :: sort(temp.begin(),temp.end());
    return temp.back()-temp.front();
}
