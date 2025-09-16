/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:30:07 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/04 18:27:18 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

void	check_empty(std :: string &s1)
{
	if (s1.empty())
	{
		std :: cout << "the first string is empty\n";
		exit(1);
	}
}

void replace_newfile(std::ofstream &Filereplace, std::ifstream &readOutput)
{
    std::string newline;
    while (std::getline(readOutput, newline))
        Filereplace << newline << std::endl;
}

void replace_in_line(std::string &line, const std::string &s1, const std::string &s2)
{
    std::string::size_type pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos)
	{
        line.erase(pos, s1.length());
        line.insert(pos, s2);
        pos += s2.length();
    }
}

int main (int argc , char ** argv)
{
	if (argc != 4)
	{
		std :: cout <<"wrong number of args \n";
		return 1;
	}
	else 
	{
		std::string file_name = argv[1];
		std :: string s1 = argv[2];
		std :: string s2 = argv[3];

		std::ifstream inputFile(file_name.c_str());
		check_empty(s1);
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

		while (std::getline(inputFile, line))
		{
			replace_in_line(line, s1, s2);  
			outputFile << line << std::endl;
		}
		inputFile.close();
		outputFile.close();
		std::ifstream readOutput("output.txt");
		if (!readOutput.is_open())
		{
            std::cout << "Error: could not open output.txt\n";
            return 1;
        }
		file_name = file_name + ".replace";
		std::ofstream Filereplace(file_name.c_str());
		if (!Filereplace.is_open())
		{	
			std::cout << "Error: could not open file " << file_name << "\n";
			return 1;
		}
		replace_newfile(Filereplace, readOutput);
	}
}

