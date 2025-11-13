/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:55:28 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/27 12:52:45 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include<algorithm>
#include <vector>
#include <limits>
class Span
{
    private :
        unsigned int N;
        std :: vector<int>vec;
    public :
        Span();
        Span(const Span &other);
        Span& operator=(const Span &other);
        ~Span();
        Span(unsigned int num);
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
        
};
#endif