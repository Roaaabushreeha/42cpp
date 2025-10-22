/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:24:11 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/22 19:15:21 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <string>
#include <exception>
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"
#include"Bureaucrat.hpp"
class AForm;
class Intern
{
    private:
    
    public:
        Intern();
        Intern(const Intern &other);
        Intern& operator=(const Intern &other);
        ~Intern();
        AForm* makeForm(const std::string &formName, const std::string &target) const;
  class UnknownFormException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

#endif