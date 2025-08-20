/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 15:34:56 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/08/19 19:31:26 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private :
			std::string name;
			Weapon &weapon; 
	public :
		HumanA(std::string name, Weapon &weapon);
		void attack();
};