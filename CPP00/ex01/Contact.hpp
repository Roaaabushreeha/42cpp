#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
public:
	void setContact(std::string firstName,
					std::string lastName,
					std::string nickName,
					std::string phoneNumber,
					std::string darkestSecret);
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std :: string getphoneNumber() const ;
	std :: string getdarkestSecret() const ;
	

};


#endif