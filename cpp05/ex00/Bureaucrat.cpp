/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:03:31 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/25 18:40:13 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std :: string &Name,int Grade) : Name(Name)
//cuz it const
//Use initializer list for const members (like name)
{
    if (Grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    if (Grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    this->Grade=Grade;
    std :: cout<<"Bureaucrat constructor called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : Name(other.Name)
{
    this->Grade=other.Grade;
    std :: cout<<"Bureaucrat copy constructor called\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        this->Grade=other.Grade;
    }
    std :: cout<<"Bureaucrat assignment constructor called\n";
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std :: cout << "destructor called \n";
}

const std :: string& Bureaucrat:: getName() const
{
    return Name;    
}
int Bureaucrat:: getGrade() const
{
    return Grade;
}

void Bureaucrat::Gradeincrement() {
    Grade--;
    if (Grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
}
void Bureaucrat::Gradedecrement() {
    Grade++; 
    if (Grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
}
std::ostream& operator<<(std::ostream &out, const Bureaucrat &b) {
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return out;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low";
}