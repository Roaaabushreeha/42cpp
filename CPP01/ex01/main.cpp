/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:07:45 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/08/12 19:48:09 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main()
{
	Zombie *zombie;
	zombie = zombieHorde(5,"h");
	for (int i=0;i<5;i++)
	{
		zombie[i].announce();
	}
	delete[] zombie;
}