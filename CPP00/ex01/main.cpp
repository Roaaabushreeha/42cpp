#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	std :: string input;
	PhoneBook Pb;
	std::cout << "Welcome To PhoneBook " << std::endl;
	while (1)
	{
		std::cout << "Enter a command : "<<std ::endl;
		std::cout << "1- ADD "<< " 2- SEARCH "<<" 3-EXIT "<<std ::endl;
		if (!std::getline(std::cin,input))
			exit(1);
		if (input == "ADD")
			Pb.addContact();
		else if (input == "SEARCH")
			Pb.searchContact();
		else if (input == "EXIT")
			break;
		else 
			std :: cout<< "wrong input try again ^^"<<std:: endl; 
	}
	
}