/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:43:01 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/08/12 15:18:35 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
Zombie::Zombie(std :: string name)
{
	this->name = name;
	std :: cout<< "is created!  hi ^^\n";
}
Zombie::	~Zombie()
{
	std :: cout<< "is destroyed! bye ^^\n";
}