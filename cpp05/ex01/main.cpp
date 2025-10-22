/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:26:41 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/20 17:34:44 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
   Bureaucrat jood("jood",50);
   Bureaucrat roaa("roaa",1); 
   Bureaucrat zeian("zeian",150);
   
   std :: cout << jood<<std :: endl;
   std :: cout << roaa <<std ::endl;
   std :: cout <<zeian<<std :: endl;
   
    Form f1("Tax Form", false, 75, 50);
    Form f2("Top Secret Form", false, 5, 2);
    Form f3; 
    
    jood.signForm(f1);
    roaa.signForm(f2);
    zeian.signForm(f2);
    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;

    std::cout << "\nCreating invalid form...\n";
        Form invalid("Invalid", false, 0, 200); // both out of range
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}