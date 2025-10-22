/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 12:30:29 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/23 19:40:01 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form 
{
    private :
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;
    public:
        Form();
        Form (const std :: string &name,bool isSigned,const int &gradeToSign,const int &gradeToExecute);
        Form (const Form &other);
        Form& operator=(const Form &other);        
        ~Form();
        void beSigned(const Bureaucrat &b);
        bool getIsSigned() const;
        const std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
    class GradeTooHighException : public std :: exception //if the grade is<1
    {
        public:
            virtual const char * what() const throw();
    };
    class GradeTooLowException : public std :: exception //if the grade is >150
    {
        public :
            virtual const char * what() const throw();
    };
  
};
std::ostream& operator<<(std::ostream &out, const Form &o);
#endif