/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:18:58 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/29 14:59:57 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

class ScalarConverter
{
     private:
        ScalarConverter();
    public :
        static void convert( std :: string const  &somthing);//iused & avoid expensive copy
};
#endif