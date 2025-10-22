/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:04:23 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/03 19:07:04 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

//convert a pointer into number
 //uintptr_t => unasigned type able to hold pointer value 
 uintptr_t  Serializer:: serialize(Data* ptr)
 {
    return reinterpret_cast<uintptr_t>(ptr); 
    //reinterpret_cast<uintptr_t>(ptr)
    //Converts 0x7ffeabcd1234 (pointer) → 140727669235028 (integer).
    //Take the bits of ptr and treat them as a uintptr_t (an unsigned integer type).”
    //It does not change the value of the pointer, just its type
 }
 Data* Serializer :: deserialize(uintptr_t raw)
 {
    // turn the integer back into a Data*
    return reinterpret_cast<Data*>(raw);  
 }