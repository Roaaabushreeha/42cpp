/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 18:32:35 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/12 14:02:52 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog:: Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
    brain = new Brain(); 
}

Dog::Dog(std :: string type) : Animal(type)
{
    std::cout << "Dog  constructor called" << std::endl;
    brain = new Brain();
}

Dog::Dog(const Dog& other):Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    brain=new Brain(*other.brain);
    
}

Dog& Dog:: operator=(const Dog &other)
{
    if (this != &other) 
    {
        this->type = other.type;
        *brain = *other.brain;  
    }
    std::cout << "Dog assignment operator called" << std::endl;
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog:: makeSound() const
{
  std::cout << "Woof!" << std::endl;
}

Brain * Dog::getBrain()const
{
    return brain;
}

