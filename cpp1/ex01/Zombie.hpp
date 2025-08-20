/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:25:56 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/08/12 19:38:35 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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