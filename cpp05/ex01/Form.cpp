/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 12:30:40 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/25 18:30:33 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() 
: name("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150) {}

Form::Form(const std::string &name, bool isSigned, const int &gradeToSign, const int &gradeToExecute)
    : name(name), isSigned(isSigned), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
    std::cout << "Form constructor called\n";
}

Form::Form(const Form &other)
    : name(other.name), isSigned(other.isSigned),
      gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {
    std::cout << "Form copy constructor called\n";
}

Form& Form:: operator=(const Form &other)
{
    if (this != &other)
    {
        this->isSigned=other.isSigned;
    }
        std::cout << "Form assignment operator called\n";
    return *this;
}     
Form ::~Form()
{
    std::cout << "Form destructor called\n";
}

bool Form::getIsSigned() const
{
    return isSigned;
}

const std::string Form::getName() const
//getName() returns const std::string& instead of std::string to avoid unnecessary copying.
{
    return name;
}

int Form::getGradeToSign() const//Minimum grade required to sign the form.
// Lower number = higher rank.
{
    return gradeToSign;
}

int Form::getGradeToExecute() const // Minimum grade required to execute the form.
{
    return gradeToExecute;
}

std::ostream& operator<<(std::ostream &out, const Form &o){
    out << o.getName()
        << ", signed: ";
    if (o.getIsSigned())
        out << "true";
    else
        out << "false";
    out << ", grade to sign: " << o.getGradeToSign()
    << ", grade to execute: " << o.getGradeToExecute();
    return out;
}

void Form :: beSigned(const Bureaucrat &b)
{
    if (b.getGrade()<= gradeToSign) //Only bureaucrats of high enough rank (low grade number) can sign.
    {
        isSigned =  true;
    }
    else 
        throw Form :: GradeTooLowException();
        
}

const char* Form:: GradeTooHighException:: what() const throw() 
{ return "Grade too high"; }
const char* Form::GradeTooLowException:: what() const throw()
{ return "Grade too low"; }
