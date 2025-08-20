/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:10:39 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/08/13 17:51:49 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
int main()
{
	std :: string is_brain;
	is_brain = "HI THIS IS BRAIN";
	std :: string *stringPTR= &is_brain;
	std :: string &stringREF = is_brain; 
	
	std :: cout << &is_brain << std :: endl;
	std :: cout << stringPTR << std :: endl;
	std :: cout << &stringREF << std :: endl;

	std :: cout << is_brain << std :: endl;
	std :: cout << *stringPTR << std :: endl;
	std :: cout << stringREF << std :: endl;


	
}