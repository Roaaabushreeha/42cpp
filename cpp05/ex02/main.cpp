/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 15:55:51 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/25 18:31:19 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    Bureaucrat bob("Bob", 50);
    Bureaucrat alice("Alice", 1);
    Bureaucrat charlie("Charlie", 150);

    ShrubberyCreationForm shrub("home");
    RobotomyRequestForm robot("Marvin");
    PresidentialPardonForm pardon("Ford");

    std::cout << "\n--- Signing Forms ---\n";
    bob.signForm(shrub);      // should succeed
    bob.signForm(robot);       // should fail
    alice.signForm(robot);     // should succeed
    charlie.signForm(pardon);  // should fail
    alice.signForm(pardon);    // should succeed

    std::cout << "\n--- Executing Forms ---\n";
    try {
        bob.executeForm(shrub);    // should succeed
        alice.executeForm(robot);  // should succeed
        charlie.executeForm(pardon); // should fail
        alice.executeForm(pardon);   // should succeed
    } catch (const std::exception &e) {
        std::cout << "Execution error: " << e.what() << std::endl;
    }

    return 0;
}
