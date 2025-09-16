/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 18:54:09 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/06 12:42:08 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int main()
{
    FragTrap a("Alpha");
    a.attack("enemy");
    a.takeDamage(40);
    a.beRepaired(30);
    a.highFivesGuys();

    std::cout << "--- Copy Constructor Test ---" << std::endl;
    FragTrap b(a);

    std::cout << "--- Assignment Operator Test ---" << std::endl;
    FragTrap c;
    c = a;

    std::cout << "--- Destruction ---" << std::endl;
    return 0;
}
