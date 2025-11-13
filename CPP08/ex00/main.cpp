/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:58:39 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/27 12:44:13 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try
    {
        std :: vector <int>v;
        v.push_back(1);
        v.push_back(4);
        std :: vector <int>::iterator it=easyfind(v,1);//here we define the iterator type
        std :: cout <<"vector : ";
        for (std :: vector <int> :: iterator i=v.begin();i!=v.end();++i)
        {
            std :: cout <<*i<<" ";
        }
        std :: cout <<std :: endl;
        std :: cout <<"found : "<<*it<<std :: endl;
        ++it;
        std :: cout <<"found after moving the pointer it: "<<*it<<std :: endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std :: list<int>li;
        li.push_front(12);
        li.push_back(14);
        std :: cout <<"list : ";
        for (std :: list <int>::iterator i = li.begin();i!=li.end();++i)
        {
            std :: cout <<*i<<" ";
        }
        std :: cout << std :: endl;
        std::list<int>::iterator it = easyfind(li, 1);
        std::cout << "Found: " << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}