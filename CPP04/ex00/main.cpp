/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 19:05:10 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/15 16:40:48 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    // Animal (virtual)
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << std::endl; // Dog
    std::cout << cat->getType() << std::endl; // Cat

    dog->makeSound(); // Woof!
    cat->makeSound(); // Meow!

    delete dog;
    delete cat;

    // WrongAnimal (non-virtual)
    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << std::endl; // WrongCat

    wrongAnimal->makeSound(); // WrongAnimal sound...
    wrongCat->makeSound();    // WrongAnimal sound... (non-virtual)

    delete wrongAnimal;
    delete wrongCat;

    // Direct WrongCat object
    WrongCat actualWrongCat;
    actualWrongCat.makeSound(); // Meow??

    return 0;
}


