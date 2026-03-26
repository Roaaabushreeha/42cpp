/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:56:41 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/11/15 17:00:17 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc,char*argv[])
{
	if (argc!=2)
	{
		std :: cout<<"ERROR in argc\n";
		return 1;
	}
	try
	{
		RPN r;
		r.calcuate(argv[1]);
	}
	catch(std :: exception &e)
	{
		std :: cout<<e.what()<<std :: endl;
	}
	return 0;
}