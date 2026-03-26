/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:14:19 by rabu-shr          #+#    #+#             */
/*   Updated: 2026/02/02 14:42:32 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
int main(int argc,char*argv[])
{

		if (argc>2)
		{
			std :: cout <<"ERROR IN ARGC NUMBER"<<std::endl;
			return 0;
		}
		else if (argc==1)
		{
			std :: cout <<"Error: could not open database file."<<std::endl;
			return 0;
		}
		try
		{
			BitcoinExchange b;
		   b.loaddata("data.csv");
		   b.loaddata_input(argv[1]);
		}catch(std :: exception &e)
		{
			 std::cout << "Exception: " << e.what() << std::endl;
		}
	return 0;
}