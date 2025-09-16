/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:50:10 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/06 12:28:56 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap bob("Bob");
    bob.attack("Evil Robot");
    bob.takeDamage(3);
    bob.beRepaired(5);
    for (int i = 0; i < 10; i++) {
        bob.attack("Target Dummy");
    }
    bob.attack("Final Boss");
    bob.takeDamage(20);
    bob.beRepaired(10);
    return 0;
}
