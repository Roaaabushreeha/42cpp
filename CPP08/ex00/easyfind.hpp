/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:27:05 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/23 11:38:00 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <list>
#include <deque>
#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>
template <typename T>
typename T::iterator easyfind(T &t,int number)
{
    typename T:: iterator it;
    it = std :: find(t.begin(),t.end(),number);
    if (it == t.end())
    {
        throw std :: runtime_error("Number not found");
    }
    return it;
}
#endif