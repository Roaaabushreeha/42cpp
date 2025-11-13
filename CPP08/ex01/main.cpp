/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:52:45 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/27 12:57:34 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Span.hpp"

 int main()
 {
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
		// Span sp(5);
		// sp.addNumber(10);
		// sp.addNumber(10);
		// sp.addNumber(10);
		// sp.addNumber(10);
		// sp.addNumber(10);
		// std::cout << "Shortest: " << sp.shortestSpan() << std::endl; // Expect 0
		// std::cout << "Longest: " << sp.longestSpan() << std::endl;  // Expect 0
		// Span sp(5);
		// sp.addNumber(-10);
		// sp.addNumber(20);
		// sp.addNumber(-5);
		// sp.addNumber(15);
		// sp.addNumber(0);
		// std::cout << "Shortest: " << sp.shortestSpan() << std::endl; // Expect small diff
		// std::cout << "Longest: " << sp.longestSpan() << std::endl;  // Expect 30
		// Span sp(3);
    	// sp.addNumber(5);
    	// std::cout << sp.shortestSpan() << std::endl; // Error: Not enough numbers
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
 }
