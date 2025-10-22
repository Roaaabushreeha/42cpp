/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 12:52:22 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/22 19:24:38 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute)
    : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
    {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
    std::cout << "AForm constructor called\n";
}

AForm::AForm(const AForm &other)
    : name(other.name), isSigned(other.isSigned),
      gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {
    std::cout << "AForm copy constructor called\n";
}

AForm& AForm:: operator=(const AForm &other)
{
    if (this != &other)
    {
        this->isSigned=other.isSigned;
    }
        std::cout << "AForm assignment operator called\n";
    return *this;
}     
AForm ::~AForm()
{
    std::cout << "AForm destructor called\n";
}

bool AForm::getIsSigned() const
{
    return isSigned;
}

const std::string& AForm::getName() const {
    return name;
}

int AForm::getGradeToSign() const
//Minimum grade required to sign the AForm.
// Lower number = higher rank.
{
    return gradeToSign;
}

int AForm::getGradeToExecute() const
// Minimum grade required to execute the AForm.
{
    return gradeToExecute;
}

std::ostream& operator<<(std::ostream &out, const AForm &o){
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

    
void AForm :: beSigned(const Bureaucrat &b)
{
    if (b.getGrade()<= gradeToSign)
    //Only bureaucrats of high enough rank (low grade number) can sign.
    {
        isSigned =  true;
    }
    else 
        throw AForm :: GradeTooLowException();
        
}

const char* AForm:: GradeTooHighException:: what() const throw() 
{ return "Grade too high"; }
const char* AForm::GradeTooLowException:: what() const throw()
{ return "Grade too low"; }
const char* AForm:: FormNotSignedException:: what() const throw()
{ return "Form not signed"; }