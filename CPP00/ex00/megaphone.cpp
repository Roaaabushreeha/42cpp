/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:31:39 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/07/03 15:31:40 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>


int main(int argc,char **argv)
{
	if(argc<2)
	{
		std ::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std :: endl; 
		return 1;
	}
	for(int i =1 ; i< argc;i++)
	{
		int j = 0;
		while (argv[i][j])
		{
			std::cout << (char)toupper(argv[i][j]);
			j++;
		}
	std :: cout<< " ";
	}
	std :: cout<<std::endl;
	return 0;
}
