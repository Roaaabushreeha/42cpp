/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:31:52 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/06 12:35:48 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default")
{
     hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap:: ScavTrap(const std :: string& name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap init constructor called." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    ClapTrap::operator=(other);
    std::cout << "ScavTrap assignment operator called." << std::endl;
    return *this;
}
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std :: cout<<"ScavTrap copy constructor called."<<std :: endl;
}

//When the object goes out of scope, ~ScavTrap runs first.
//Then the base class destructor ~ClapTrap runs.
ScavTrap :: ~ScavTrap()
{
    std :: cout <<"~ScavTrap destructor called"<<std :: endl;
}

//This uses the overridden attack() from ScavTrap.
//Same logic as ClapTrap, but different message.
void  ScavTrap :: attack(const std::string& target) 
{
    if (hitPoints > 0 && energyPoints >0)
    {
          std::cout << "ScavTrap " << name
                  << " attacks " << target
                  << ", causing " << attackDamage
                  << " points of damage!" << std::endl;
        energyPoints--;
    }
    else 
    {
         std::cout << "ScavTrap " << name
                  << " cannot attack!" << std::endl;
    }
    std::cout << "Energy left: " << energyPoints << ", Hit points: " << hitPoints << std::endl;
}
void ScavTrap::guardGate()//Unique to ScavTrap, doesn’t exist in ClapTrap.
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}