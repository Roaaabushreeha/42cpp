/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 18:16:20 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/05 19:40:35 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main()
{
    std::cout << "Creating ScavTrap...\n";
    ScavTrap scav("Guardian");

    std::cout << "\nAttacking with ScavTrap...\n";
    scav.attack("enemy");

    std::cout << "\nTaking damage...\n";
    scav.takeDamage(30);

    std::cout << "\nRepairing...\n";
    scav.beRepaired(20);

    std::cout << "\nActivating Gate Keeper mode...\n";
    scav.guardGate();

    std::cout << "\nEnd of main, destructors will now be called.\n";
    return 0;
}