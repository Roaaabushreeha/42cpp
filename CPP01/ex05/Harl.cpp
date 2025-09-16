/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:00:56 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/04 16:04:55 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl:: Harl()
{
	
}
Harl:: ~Harl()
{
	
}
void Harl :: debug( void )
{
	std :: cout << "[Debug] ";
	std :: cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!\n";
}
void Harl :: info( void )
{
	std :: cout << "[Info] ";
	std :: cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}
void Harl :: warning( void )
{
	std :: cout << "[Warning] ";
	std :: cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void Harl :: error( void )
{
	std :: cout << "[Error] ";
	std :: cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl ::  complain( std::string level )
{
	std :: string members[]={"DEBUG","INFO","WARNING","ERROR"};
	void (Harl::*functions[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};//enable users to treat functions as objects
	int i = 0;
	while (i<4)
	{
		if (members[i]==level)
		{
			(this->*functions[i])();
			return ;
		}
		i++;
	}	
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}