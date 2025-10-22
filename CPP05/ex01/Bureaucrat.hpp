/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:16:17 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/23 19:32:20 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP
#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"
class Form;
class Bureaucrat
{
  private:
  const std :: string Name;
  int Grade;
  public:
    Bureaucrat(const std :: string &Name,int Grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat &other);
    ~Bureaucrat();
    const std :: string& getName() const;
    int getGrade() const;
    void signForm(Form &f);
    void Gradeincrement();
    void Gradedecrement();
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };
    
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &b);
#endif