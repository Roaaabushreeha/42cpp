/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:07:15 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/03 19:17:10 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Data.hpp"
#include "Serializer.hpp"

int main()
{
    Data *ptr=new Data(8,"hello");
    uintptr_t raw=Serializer::serialize(ptr);
    Data *ptr2=Serializer::deserialize(raw);
    std::cout << "Original ptr: " << ptr << std::endl;
    std::cout << "Serialized raw: " << raw << std::endl;
    std::cout << "Deserialized ptr2: " << ptr2 << std::endl;
}