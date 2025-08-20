/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:18:56 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/08/12 19:34:10 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *z = new Zombie[N];
	for (int i=0;i<	N;i++)
	{
		z[i].setName(name);
	}
	return (z);
}