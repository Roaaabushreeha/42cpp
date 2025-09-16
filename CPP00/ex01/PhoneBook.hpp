/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:28:41 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/07/28 17:47:17 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include "Contact.hpp"
class PhoneBook
{
private:
	Contact contacts[8];
	int	index;
	int total;
public:
	void addContact();
	void searchContact();
	PhoneBook();
};


#endif