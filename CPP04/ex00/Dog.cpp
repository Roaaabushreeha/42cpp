/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 18:32:35 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/14 17:57:50 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void Dog:: makeSound() const
{
  std::cout << "Woof!" << std::endl;
}

Dog:: Dog() : Animal("Dog")
{
        std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std :: string type) : Animal(type)
{
        std::cout << "Dog  constructor called" << std::endl;
}

Dog::Dog(const Dog& other):Animal(other)
{
        std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog:: operator=(const Dog &other)
{
    if (this != &other) 
    {
        this->type = other.type;
    }
    std::cout << "Dog assignment operator called" << std::endl;
    return *this;
}

Dog::~Dog()
{
     std::cout << "Dog destructor called" << std::endl;
}