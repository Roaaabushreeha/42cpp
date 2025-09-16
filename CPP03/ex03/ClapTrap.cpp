/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 13:59:42 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/06 14:00:00 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap :: ClapTrap()
{
    hitPoints=10;
    energyPoints=10;
    attackDamage=0;
    std::cout << "ClapTrap defualt constructor created!" << std::endl;
}
ClapTrap :: ClapTrap(const std :: string &name)
{
    this->name=name;
    hitPoints=10;
    energyPoints=10;
    attackDamage=0;
    std::cout << "ClapTrap parameterized constructor called for " << name << "." << std::endl;
}
ClapTrap :: ClapTrap(const ClapTrap& other)
{
    this->name=other.name;
    hitPoints=other.hitPoints;
    energyPoints=other.energyPoints;
    attackDamage=other.attackDamage;
    std::cout << "ClapTrap copy constructor called." << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap assignment operator called." << std::endl;
    return *this;
}
ClapTrap ::  ~ClapTrap()
{
    std::cout << "ClapTrap destructor called." << std::endl;
}
 void ClapTrap :: attack(const std::string& target)
 {
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
        std::cout << "Energy left: " << energyPoints << ", Hit points: " << hitPoints << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << name << " cannot attack!" << std::endl;
    }
 }

 void ClapTrap :: takeDamage(unsigned int amount)
 {
    if (hitPoints <= (int)amount)
        hitPoints = 0;
    else
        hitPoints -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! Hit points left: " << hitPoints << std::endl;
    std::cout << "Energy left: " << energyPoints << ", Hit points: " << hitPoints << std::endl;
}

    void ClapTrap :: beRepaired(unsigned int amount)
    {
        if (hitPoints > 0 && energyPoints>0)
        {
                hitPoints+=static_cast<int>(amount);
                energyPoints--;
                std::cout << "ClapTrap " << name << " repairs itself for " << amount << " points! Hit points now: " << hitPoints << std::endl;
                std::cout << "Energy left: " << energyPoints << ", Hit points: " << hitPoints << std::endl;
        }
        else
        {
                std::cout << "ClapTrap " << name << " cannot repair!" << std::endl;
        }
    }