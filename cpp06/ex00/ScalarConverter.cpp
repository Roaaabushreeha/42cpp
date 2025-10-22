/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:18:55 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/05 14:47:39 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib> 
#include <iostream>
#include <cctype>
#include <limits>

ScalarConverter::ScalarConverter() {}

void char_print(std::string const &value)
{
    if (value == "nan" || value == "nanf" || 
        value == "+inf" || value == "-inf" || 
        value == "+inff" || value == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        return;
    }
    if (value.length() == 1 && !std::isdigit(value[0]))
    {
        unsigned char c = value[0];
        if (c < 32 || c == 127)
        std::cout << "char: Non displayable" << std::endl;
        else
        std::cout << "char: '" << c << "'" << std::endl;
        return;
    }
    if (std::isdigit(value[0]) && value[value.size()-1]!='f')
    {
          std::cout << "char: Non displayable"  << std::endl;
          return;
    }
    std::string word = value;
    if (!word.empty() && word[word.size() - 1] == 'f')
        word = word.substr(0, word.size() - 1);
    float f = std::atof(word.c_str());
    if (f <32 || f>127)
    {
         std::cout << "char: impossible" << std::endl;
        return;
    }
    std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
}

void int_print(std::string const &word)
{
    if (word == "nan" || word == "nanf" || 
        word == "+inf" || word == "-inf" || 
        word == "+inff" || word == "-inff")
    {
        std::cout << "int: impossible" << std::endl;
        return;
    }
    if (word.length() == 1 && !std::isdigit(word[0]))
    {
        std::cout << "int: " << static_cast<int>(word[0]) << std::endl;
        return;
    }
    std::string new_word = word;
    if (word[word.size() - 1] == 'f')
        new_word = word.substr(0, word.size() - 1);

    long value = std::atol(new_word.c_str());
    if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
    {
        std::cout << "int: impossible" << std::endl;
        return;
    }

    std::cout << "int: " << static_cast<int>(value) << std::endl;
}
//Handles both literal float (12.3f) and numeric string (12.3).
//.0f ensures the output matches C++ float notation.
void float_print(std::string const &word)
{
    if (word == "nanf" || word == "+inff" || word == "-inff")
    {
        std::cout << "float: " << word << std::endl;
        return;
    }
    if (word.length() == 1 && !std::isdigit(word[0]))
    {
        float f = static_cast<float>(word[0]);
        std::cout << "float: " << f << ".0f" << std::endl;
        return;
    }

    std::string number = word;
    if (!number.empty() && number[number.size() - 1] == 'f')
        number = number.substr(0, number.size() - 1);

    float f = static_cast<float>(std::atof(number.c_str()));
    if (f == static_cast<int>(f))
        std::cout << "float: " << f << ".0f" << std::endl;
    else
        std::cout << "float: " << f << "f" << std::endl;
}

void double_print(std::string const &word)
{
    if (word == "nan" || word == "+inf" || word == "-inf")
    {
        std::cout << "double: " << word << std::endl;
        return;
    }
    if (word.length() == 1 && !std::isdigit(word[0]))
    {
        double d = static_cast<double>(word[0]);
        std::cout << "double: " << d << ".0" << std::endl;
        return;
    }

    std::string number = word;
    if (!number.empty() && number[number.size() - 1] == 'f')
        number = number.substr(0, number.size() - 1);

    double d = std::atof(number.c_str());
    if (d == static_cast<int>(d))
        std::cout << "double: " << d << ".0" << std::endl;
    else
        std::cout << "double: " << d << std::endl;
}

void ScalarConverter::convert(std::string const &word)
{
    char_print(word);
    int_print(word);
    float_print(word);
    double_print(word);
}

