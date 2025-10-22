/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 14:06:03 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/05 13:53:30 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  BASE_HPP
#define BASE_HPP
#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
#include <exception> 
class Base
{
  public:
    virtual ~Base();  
};
#endif
Base* generate(void);
void identify(Base *p);
void identify(Base &p);

//A class is polymorphic if it has at least one virtual function
//dynamic_cast will not work — it will fail at compile time.