/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:04:38 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/03 19:16:21 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEIALIZER_HPP
#define SEIALIZER_HPP
#include <stdint.h> 
#include <iostream>
#include "Data.hpp"

class Serializer 
{
    
    private :
        Serializer();
    public :
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);

};
#endif