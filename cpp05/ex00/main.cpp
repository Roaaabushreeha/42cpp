/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:03:15 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/25 18:28:36 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    // try
    // {
    //     Bureaucrat b("roaa",5);
    //     std::cout << b << std::endl;
    //     b.Gradeincrement();
    //     std::cout << "After increment: " << b << std::endl;
    //     b.Gradedecrement();
    //     std::cout << "After decrement: " << b << std::endl;
    //     Bureaucrat b2("Bob", 200);
    //     std::cout << b2 << std::endl;

        
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
     try {
        // ❌ Too high grade (should throw)
        Bureaucrat b3("Charlie", 0);
        std::cout << b3 << std::endl;  // won’t run
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try {
        // ✅ Test multiple increments until exception
        Bureaucrat b4("David", 150);
        std::cout << b4 << std::endl;
        b4.Gradedecrement();  // should throw here
        std::cout << b4 << std::endl;
        // b4.Gradeincrement();  // grade 1
        // std::cout << b4 << std::endl; // won’t run
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}