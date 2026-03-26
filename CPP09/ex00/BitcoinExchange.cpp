/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:14:44 by rabu-shr          #+#    #+#             */
/*   Updated: 2026/02/02 14:36:47 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other):data(other.data)
{}
BitcoinExchange &BitcoinExchange:: operator=(const BitcoinExchange &other)
{
	if (this != &other)
	{
		data=other.data;
	}
	return(*this);
}
BitcoinExchange::~BitcoinExchange()
{
	
}void BitcoinExchange::loaddata(const std :: string &file_name)
{
	std :: ifstream file(file_name.c_str());
	if(!file.is_open())
	{        
		throw std::runtime_error("Error: could not open database file.");		
	}
	std :: string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		size_t pos = line.find(',');
    	if (pos == std::string::npos)
        		continue;
		std::string rateStr = line.substr(pos + 1);
		std::string date = line.substr(0, pos);
		double rate = atof(rateStr.c_str());
        data[date] = rate;
	}			
}
	
const std::map<std::string, double>&BitcoinExchange:: getData() const 
{
	 return data;
}

std::string trim(const std::string &str)
{
    size_t start = str.find_first_not_of(" \t");
    if (start == std::string::npos) return "";
    size_t end = str.find_last_not_of(" \t");
    return str.substr(start, end - start + 1);
}

void BitcoinExchange::loaddata_input(const std::string &input_file)
{
    std::ifstream fileinput(input_file.c_str());
    if (!fileinput.is_open())
        throw std::runtime_error("Error: could not open input file.");

    std::string line;
    std::getline(fileinput, line);
	
    while (std::getline(fileinput, line))
    {
        size_t pos = line.find('|');
        if (pos == std::string::npos)
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }

        std::string date = trim(line.substr(0, pos));
        std::string rateStr = trim(line.substr(pos + 1));

        double rate = atof(rateStr.c_str());
        if (rate < 0)
        {
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }
        if (rate > 1000)
        {
            std::cout << "Error: too large a number." << std::endl;
            continue;
        }
        std::map<std::string,double>::const_iterator it = data.lower_bound(date);
        if (it == data.end() || it->first != date)
        {
            if (it == data.begin())
            {
                std::cout << "Error: no earlier date for " << date << std::endl;
                continue;
            }
            --it;
        }
        double result = it->second * rate;
        std::cout << date << " => " << rateStr << " = " << result << std::endl;
    }
}
