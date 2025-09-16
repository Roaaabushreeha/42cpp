/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:25:56 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/08/24 12:23:11 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie {
	private :
		std :: string name;
	public :
		Zombie();
		void announce( void );
		void setName(std:: string n);
		Zombie(std :: string name);
		~Zombie();
};

Zombie* zombieHorde( int N, std::string name );
#endif