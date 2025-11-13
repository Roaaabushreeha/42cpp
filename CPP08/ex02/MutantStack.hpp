/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:18:00 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/25 12:07:21 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iostream>
template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public :
    MutantStack()
    {}
    MutantStack(const MutantStack &other): std::stack<T, Container>(other) {}
    MutantStack& operator=(const MutantStack &other)
    {
        if (this != &other)
        {
            std::stack<T, Container>::operator=(other);
        }
        return *this;
    }
    ~MutantStack(){}
        typedef typename std :: stack<T,Container>::container_type :: iterator iterator;
        //The line you provided is a typedef that creates a convenient alias for a specific type hidden deep inside a std::stack. It's a way of shortening a very long type name.
        typedef typename std :: stack<T,Container>:: container_type :: const_iterator const_iterator;
        typedef typename std :: stack<T,Container>::container_type :: reverse_iterator  reverse_iterator;
        typedef typename std :: stack<T,Container> ::container_type ::const_reverse_iterator  const_reverse_iterator;

        iterator begin(){return this->c.begin();};
        iterator end(){return this->c.end();};
        const_iterator  begin()const {return this->c.begin();};
        const_iterator end()   const { return this->c.end(); }
        reverse_iterator  rbegin(){return this->c.rbegin();};
        reverse_iterator rend(){return this->c.rend();};
        const_reverse_iterator  rbegin()const{return this->c.rbegin();};
        const_reverse_iterator  rend()const{return this->c.rend();};
        
};

//container_type is the type of the underlying container (deque<T> by default).
//iterator → allows you to read and modify elements while iterating.
//const_iterator → allows you to read only; you cannot change the elements.

#endif