/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:50:33 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/06 12:25:38 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>
class ClapTrap
{
    private :
        std :: string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public :
        ClapTrap(const ClapTrap& other);
        ClapTrap();
        ClapTrap& operator=(const ClapTrap &other);
        ~ClapTrap();
        ClapTrap (const std :: string& name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
#endif