/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:24:08 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/25 18:51:40 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
Intern::Intern()
{}
Intern::Intern(const Intern &other)
{
    (void)other;
}
Intern& Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}
Intern::~Intern()
{}


AForm* Intern:: makeForm(const std::string &formName, const std::string &target) const
{
    AForm *form=NULL;
    std :: string forms[3]={
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"};
    try
    {
        if(formName == forms[0])
        {
            form = new ShrubberyCreationForm(target);
        }
        else if (formName == forms[1])
        {
            form = new RobotomyRequestForm(target);
        }
        else if (formName == forms[2])
        {
            form = new PresidentialPardonForm(target);
        }
        
    }
    catch(const std::exception &e)
    {
        std :: cout <<"exception error"<<e.what()<<std :: endl;
    }
     std::cout << formName << " : Intern Created\n";
    return (form);
}

const char* Intern:: UnknownFormException::what() const throw()
{
    return "Intern cannot create unknown form";
}