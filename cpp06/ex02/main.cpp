/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:47:45 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/05 14:13:56 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include"B.hpp"
#include"C.hpp"

int main ()
{
    Base * base=generate();
    identify(*base); //will call the identfy(base &p)
    identify(base);//will call the identfy (base *p)
    delete base;
    return 0;
}