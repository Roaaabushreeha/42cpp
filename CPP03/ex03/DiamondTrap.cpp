/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:05:18 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/05 19:32:50 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    : ClapTrap("Default_clap_name"), FragTrap("Default"), ScavTrap("Default"), name("Default") {
    hitPoints = 100;      // FragTrap default
    energyPoints = 50;    // ScavTrap default
    attackDamage = 30;    // FragTrap default
    std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), name(name) {
    hitPoints = 100;      // FragTrap default
    energyPoints = 50;    // ScavTrap default
    attackDamage = 30;    // FragTrap default
    std::cout << "DiamondTrap parameterized constructor called for " << name << "." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), FragTrap(other), ScavTrap(other), name(other.name) {
    std::cout << "DiamondTrap copy constructor called." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        FragTrap::operator=(other);
        ScavTrap::operator=(other);
        name = other.name;
        std::cout << "DiamondTrap assignment operator called." << std::endl;
    }
    return *this;
}

void DiamondTrap:: attack(const std::string& target)
{
    ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called." << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << name
              << ", ClapTrap name: " << ClapTrap::name << std::endl;
}