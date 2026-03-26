/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:38:52 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/11/15 17:34:13 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include "RPN.hpp"

RPN::RPN()
{}

RPN::RPN(const RPN &other)
{
    this->operation = other.operation;
}

RPN& RPN::operator=(const RPN &other)
{
    if (this != &other)
        this->operation = other.operation;
    return *this;
}

RPN::~RPN()
{}

void RPN::calcuate(const std::string something)
{
    if (something.empty())
        throw std::runtime_error("Error");

    for (size_t i = 0; i < something.length(); i++)
    {
        char c = something[i];
        if (c == ' ')
            continue;
        if (c == '(' || c == ')')
            throw std::runtime_error("Error");
        if (c >= '0' && c <= '9')
        {
            int number = c - '0';
            operation.push(number);
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/')
        {
            if (operation.size() < 2)
                throw std::runtime_error("Error");

            int a = operation.top();
                operation.pop();
            int b = operation.top();
            operation.pop();
            int result = 0;
            if (c == '+') 
                result = b + a;
            else if (c == '-')
                result = b - a;
            else if (c == '*')
                result = b * a;
            else if (c == '/')
            {
                if (a == 0)
                    throw std::runtime_error("Error");
                result = b / a;
            }
            operation.push(result);            
        }
        else
        {
            throw std::runtime_error("Error");
        }
    }
    
    if (operation.size() != 1)
        throw std::runtime_error("Error");
     if (operation.size()==1)
        std::cout << operation.top() << std::endl;
    while (!operation.empty())
        operation.pop();
}

		