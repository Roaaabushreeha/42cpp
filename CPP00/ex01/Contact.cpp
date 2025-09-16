#include "Contact.hpp"
#include "PhoneBook.hpp"


void Contact :: setContact(std::string firstName
	,std::string lastName
	,std::string nickName
	,std::string phoneNumber
	,std::string darkestSecret)
	{
		this->darkestSecret = darkestSecret;
		this->firstName=firstName;
		this -> lastName = lastName;
		this->phoneNumber=phoneNumber;
		this->nickName=nickName;
	}

std::string Contact::getFirstName() const
{
	return firstName;
}

std::string Contact::getLastName() const
{
	return lastName;
}

std::string Contact::getNickname() const
{
	return nickName;
}

std::string Contact::getphoneNumber() const
{
	return phoneNumber;
}

std::string Contact::getdarkestSecret() const
{
	return darkestSecret;
}
