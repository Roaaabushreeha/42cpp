/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 15:50:44 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/22 15:16:51 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("ShrubberyCreation", 145, 137) {
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
    : AForm(other) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    (void)other;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}
//ShrubberyCreationForm
//Purpose: Creates a file called <target>_shrubbery in your working directory.
//Action: Writes ASCII trees inside the file.
//Sign: 145 → any bureaucrat with grade ≤ 145 can sign it.
//Execute: 137 → any bureaucrat with grade ≤ 137 can execute it.
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (!getIsSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw AForm::GradeTooLowException();

    std::ofstream ofs((target + "_shrubbery").c_str());
    if (ofs.is_open()) {
        ofs << "   _-_\n";
        ofs << "  /   \\\n";
        ofs << " /     \\\n";
        ofs << "   | |\n";
        ofs << "   | |\n";
        ofs.close();
    }
}
