/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:31:26 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/07/31 16:35:20 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	total = 0;
}
std :: string check_len(std :: string name) 
{
	std :: string newword ;
	if (name.length()>10)
	{
		newword =  name.substr(0,9);
		newword = newword + "."; 
		return newword;
	}
	return newword;
}

void PhoneBook :: searchContact()
{

	if (total == 0)
    {
        std::cout << "No contacts to display.\n";
        return;
    }
	int i = 0;

	std::cout << "---------------------------------------------\n";
    std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
    std::cout << "---------------------------------------------\n";
while (i < total)
{
    std::cout << "|" << std::setw(10) << i;

    std::string first = contacts[i].getFirstName();
    std::string last = contacts[i].getLastName();
    std::string nick = contacts[i].getNickname();

    if (first.length() > 10)
        first = check_len(first);
    if (last.length() > 10)
        last = check_len(last);
    if (nick.length() > 10)
        nick = check_len(nick);

    std::cout << "|" << std::setw(10) << first;
    std::cout << "|" << std::setw(10) << last;
    std::cout << "|" << std::setw(10) << nick;
    std::cout << "|" << std::endl;
    i++;
}
	std::cout << "---------------------------------------------\n";
	std :: cout << std :: endl;
	std::cout << "enter an index: \n";
	std::string indStr;
	std::getline(std::cin, indStr);
	int ind = -1;
	ind = std::atoi(indStr.c_str());
	if (ind == -1)
	{
		std::cout << "Invalid input. Please enter a number.\n";
		return ;
	}
	if (ind < 0 || ind >= total)
	{
		std::cout << "There is no user with that index. Try again.\n";
		return ;
	}
	std::cout << "first name : " << contacts[ind].getFirstName() << "\n";
	std::cout << "last name : " << contacts[ind].getLastName() << " \n";
	std :: cout << "phoneNumber : "<<contacts[ind].getphoneNumber() << "\n";
	std :: cout << "darkestSecret: " << contacts[ind].getdarkestSecret()<<"\n";
	std::cout << "nickname : " << contacts[ind].getNickname() << std::endl;
}

int checkNumber(std :: string number)
{
	int i = 0;
	while (number[i])
	{
		if (!isdigit(number[i]))
		{
			std::cout << "Phone number must contain digits only.\n";
			return 1;
		}
		i++;
	}
	int length = number.length();
	if (length > 10)
	{
		std::cout << "Phone number must be at most 10 digits.\n";
	}
	return 0;
}

void PhoneBook :: addContact()
{
	std :: string word;
	std :: string firstName, lastName, nickName, phoneNumber, darkestSecret;
	std :: cout << "enter your first name :";
	if (!std :: getline(std::cin, firstName))
		exit(1);
	std :: cout << "enter your last Name :";
	if (!std :: getline(std::cin, lastName))
		exit (1);
	std :: cout << "enter your nick name :";
	if(!std :: getline(std::cin, nickName))
		exit (1);
	std :: cout << "enter your phone Number :";
	if (!std :: getline(std::cin, phoneNumber))
		exit (1);
	if (checkNumber(phoneNumber))
		return;
	std :: cout << "enter your darkestSecret :";
	if (!std :: getline(std::cin, darkestSecret))
		exit (1);
	contacts[index].setContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	index = (index + 1) % 8;
	if (total < 8)
		total++;
	std :: cout << "setting contact done ^^" << std::endl;
}

