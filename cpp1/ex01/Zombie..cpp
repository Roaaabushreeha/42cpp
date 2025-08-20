/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie..cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:08:17 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/08/12 19:46:42 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie :: setName(std:: string n)
{
	name = n;
}
void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
Zombie :: Zombie()  //we need a default cons cuz we create a array of zombies but we are not give them the valuse yet so we use the default like alocat the array 
{
	name = "";
}

Zombie::	~Zombie()
{
	std :: cout<< "is destroyed! bye ^^\n";
}
