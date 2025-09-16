/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 18:31:19 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/06 18:54:54 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef DOG_HPP
 #define DOG_HPP
#include "Animal.hpp"
class Dog : public Animal
{
    public:
    void makeSound() const;
    Dog();
    Dog(std :: string type);
    Dog(const Dog& other);
    Dog& operator=(const Dog &other);
    ~Dog();
};
#endif