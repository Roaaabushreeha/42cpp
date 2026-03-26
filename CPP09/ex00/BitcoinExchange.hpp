/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:18:00 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/11/13 17:04:59 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include<string>
#include <fstream>
#include <map>
#include <sstream>
#include <cstdlib>
#include <exception>
class BitcoinExchange
{
private :
std :: map<std ::string,double>data;
public:
	BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);
    ~BitcoinExchange();
	void loaddata(const std :: string &file_name);
    const std::map<std::string, double>& getData() const ;
    void loaddata_input(const std :: string &input_file);
};
#endif