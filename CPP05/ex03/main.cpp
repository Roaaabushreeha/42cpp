/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 15:55:51 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/25 18:57:49 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

////Shrubbery → creates a file
//Robotomy → prints drilling + random result
//Pardon → prints a pardon message
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main() {
    // Creating Bureaucrats
    try
    {
        Bureaucrat bob("Bob", 50);    // Grade 50 → can sign some forms
        Bureaucrat alice("Alice", 1); // Grade 1 → highest rank, can sign & execute everything
    
        std::cout << "\n--- Signing Forms ---\n";
    
        // Creating forms
        ShrubberyCreationForm form1("home");       // AForm constructor called
        RobotomyRequestForm form2("Bender");       // AForm constructor called
        PresidentialPardonForm form3("Ford");      // AForm constructor called
    
        // Signing forms
        bob.signForm(form1);   // Bob grade 50 <= 145 → form signed
        bob.signForm(form2);   // Bob grade 50 > 72 → cannot sign, exception handled
        bob.signForm(form3);   // Bob grade 50 > 25 → cannot sign, exception handled
    
        alice.signForm(form2); // Alice grade 1 <= 72 → signed
        alice.signForm(form3); // Alice grade 1 <= 25 → signed
    
        std::cout << "\n--- Executing Forms ---\n";
    
        // Executing forms
        bob.executeForm(form1);    // ShrubberyCreation → creates ASCII tree file
        alice.executeForm(form2);  // RobotomyRequest → prints drilling noises & success/failure
        alice.executeForm(form3);  // PresidentialPardon → prints pardon message
    
        std::cout << "\n--- Intern creates a form ---\n";
        Intern intern;
        AForm* newForm = intern.makeForm("robotomy request", "Marvin");
        if (newForm) {
            // Intern creates RobotomyRequestForm
            alice.signForm(*newForm);     // Alice signs
            alice.executeForm(*newForm);  // Alice executes
            delete newForm;               // clean up memory → AForm destructor called
        }
    }
    catch (const std :: exception &e )
    {
        std :: cout <<"exception error"<<e.what()<<std :: endl;
    }       
    return 0;
}

