/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:54:15 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/08/19 19:41:14 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public :
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		void attack();
};
