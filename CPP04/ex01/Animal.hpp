/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 15:28:19 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/09 18:27:17 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include<string>

class Animal
{
    protected:
        std :: string type;
    public:
        Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal &other);
        virtual ~Animal();
        virtual void makeSound() const; 
        Animal(std :: string type);
        std :: string getType() const; 
};
#endif