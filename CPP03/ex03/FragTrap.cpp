/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 18:29:57 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/06 13:59:23 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

 FragTrap :: FragTrap() :   ClapTrap("Default")
 {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap default constructor called." << std::endl;
}
FragTrap :: FragTrap(const std :: string &name) : ClapTrap(name)
{
     hitPoints = 100;
     energyPoints = 100;
     attackDamage = 30;
     std::cout << "FragTrap init constructor called." << std::endl;
}
FragTrap :: FragTrap (const FragTrap& other):ClapTrap(other)
{
    std::cout << "FragTrap assignment operator called." << std::endl;
}
FragTrap& FragTrap :: operator=(const FragTrap  &other)
{
    ClapTrap::operator=(other);
    std::cout << "FragTrap assignment operator called." << std::endl;
    return *this;
}
FragTrap :: ~FragTrap()
{
    std::cout << "FragTrap " << name << " is now in Gate keeper mode." << std::endl;
}


void  FragTrap :: attack(const std::string& target) 
{
    if (hitPoints > 0 && energyPoints >0)
    {
          std::cout << "FragTrap " << name
                  << " attacks " << target
                  << ", causing " << attackDamage
                  << " points of damage!" << std::endl;
        energyPoints--;
    }
    else 
    {
         std::cout << "FragTrap " << name
                  << " cannot attack!" << std::endl;
    }
}
void FragTrap:: highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}