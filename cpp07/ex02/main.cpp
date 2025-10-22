/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:16:51 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/12 16:03:36 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int>arr(10);
    for (unsigned int i =0;i<arr.size();i++)
    {
        arr[i]=i*2;
    }
    Array<int>b(arr);
    b[0]=999;
     for (unsigned int i = 0; i < arr.size(); i++)
        std::cout << "a[" << i << "]=" << arr[i] 
                  << " | b[" << i << "]=" << b[i] << std::endl;
    try
    {
        
        std::cout << arr[12];
    }
    catch(std :: exception &e)
    {
        std :: cout <<"error: "<<e.what()<<std :: endl;
    }
    return 0;
}