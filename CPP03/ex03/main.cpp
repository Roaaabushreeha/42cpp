/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 19:29:16 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/05 19:40:16 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    std::cout << "=== ClapTrap ===" << std::endl;
    ClapTrap clap("Clappy");
    clap.attack("Target1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n=== ScavTrap ===" << std::endl;
    ScavTrap scav("Guardian");
    scav.attack("Target2");
    scav.guardGate();

    std::cout << "\n=== FragTrap ===" << std::endl;
    FragTrap frag("Fraggy");
    frag.attack("Target3");
    frag.highFivesGuys();

    std::cout << "\n=== DiamondTrap ===" << std::endl;
    DiamondTrap diamond("Diamondy");
    diamond.attack("Target4");
    diamond.guardGate();
    diamond.highFivesGuys();
    diamond.whoAmI();

    std::cout << "\n=== End of program ===" << std::endl;
    return 0;
}
