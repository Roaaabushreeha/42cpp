/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 19:01:29 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/14 17:58:04 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>

#include"Animal.hpp"
class Cat : public Animal
{
public:
    void makeSound() const;
    Cat();
    Cat(std :: string type);
    Cat(const Cat& other);
    Cat& operator=(const Cat &other);
    ~Cat();
};

#endif