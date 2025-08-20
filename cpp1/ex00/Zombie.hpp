/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:43:15 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/08/12 16:43:39 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie {
	private :
		std :: string name;
	public :
		void announce( void );
		Zombie(std :: string name);
		~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );