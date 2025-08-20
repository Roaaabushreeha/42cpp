/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:30:07 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/08/20 19:39:18 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>


int main (int argc , char ** argv)
{
	if (argc != 4)
		return 1;
	else 
	{
		std::string file_name = argv[1];
		std :: string s1=argv[2];
		std :: string s2=argv[3];
		std::ifstream inputFile(file_name.c_str());
		if (!inputFile.is_open())
		{
			std::cout << "Error: could not open file " << file_name << "\n";
			return 1;
		}
			std::string line;
			std::ofstream outputFile("output.txt");
			if (!outputFile.is_open())
			{	std::cout << "Error: could not open file " << file_name << "\n";
				return 1;
			}
		while (std :: getline(inputFile , line))
		{
			outputFile << line << std :: endl;
		}		
	}
}