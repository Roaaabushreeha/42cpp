/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:57:10 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/12 18:37:43 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
 
    Animal a;
    Dog d1;
    d1.getBrain()->setIdea(0, "Eat bones");

    Dog d2 = d1;
    d2.getBrain()->setIdea(0, "Sleep all day");

    std::cout << "Dog1 idea: " << d1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Dog2 idea: " << d2.getBrain()->getIdea(0) << std::endl;

    return 0;
}

