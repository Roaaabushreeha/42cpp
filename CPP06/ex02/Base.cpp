/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 14:06:10 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/05 14:35:20 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base* generate(void)
{
//Because if you don’t call srand(),
//rand() will give the same sequence of numbers every time you run the program.
//It tells the computer: “Start your random number generator with this starting value (seed).
//time(NULL) gives the current time in seconds since 1970.
//→ It changes every second.
srand(time(NULL));
int random = rand()%3;
//3 → divides that number by 3 and keeps the remainder
//→ result will always be one of 0, 1, or 2.
    if(random==0)
        return new A;
    else if (random ==1)
        return new B;
    else 
        return new C;
    return NULL;
}
//You have a pointer to a base class, but you want to know which derived class it actually points to (A, B, or C).
//Safe because pointers can be nullptr if the cast fails.
void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std :: cout <<"identify pointer: A\n";
    else if (dynamic_cast<B*>(p))
        std :: cout <<"identify pointer: B\n";
    else if (dynamic_cast<C*>(p))
        std :: cout <<"identify pointer: C\n";
}
//You cannot check for nullptr,
// because references always refer to an object.
//So if you do dynamic_cast<Derived&>(p) and it fails, C++ throws an exception (std::bad_cast).
void identify(Base &p)
{
    try
    {
        A& a =dynamic_cast<A&>(p);
        (void)a;
        std:: cout <<"identify ref: A\n";
    }
    catch(...)
    {}
    try
    {
        B& b =dynamic_cast<B&>(p);
        (void)b;
        std:: cout <<"identify ref: B\n";
    }
    catch(...)
    {}
    try
    {
        C& c =dynamic_cast<C&>(p);
        (void)c;
        std:: cout <<"identify ref: C\n";
    }
    catch(...)
    {}  
}

 Base :: ~Base()
 {
    
 }  