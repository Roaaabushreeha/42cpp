/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:40:47 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/11/15 17:25:41 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP
#include <stack>
#include <iostream>
#include<string>
#include <sstream>
#include <cstdlib>
#include<cctype>
#include<exception>
class RPN
{
	private :
		std :: stack<int>operation;
	public:
		RPN();
		RPN(const RPN &other);
		RPN& operator=(const RPN &other);
		~RPN();
		void calcuate(std :: string something);		
};
#endif