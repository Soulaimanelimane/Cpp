/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:52:24 by slimane           #+#    #+#             */
/*   Updated: 2025/12/06 17:15:34 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :AForm("shrubbry", 145, 137) ,  target("void")
{
    std::cout << "the Default Constructor Called from ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &_target) :AForm("shrubbry", 145, 137) ,  target(_target)
{
    std::cout << "the Parametrize Constructor Called from ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm   &obj) : AForm(obj), target(obj.target)
{
    std::cout << "the Copy Constructor Called from ShrubberyCreationForm" << std::endl;
            
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    if (this == &obj)
        return *this;
    (AForm::operator=(obj));
    this->target = obj.target;
    std::cout << "the Copy assignment operator Called from ShrubberyCreationForm" << std::endl;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSignd())
    throw AForm::NotSigned();
    if (executor.getGrade() > this->getGradeExecute())
    throw AForm::GradeTooLowException();
    
    std::string name  = target + "_shrubbery";
    std::ofstream file(name.c_str());
    if (file.is_open())
    {
        file <<
        "            *\n"
        "         *     *\n"
        "      *     *     *\n"
        "          /-\\\n"
        "         /   \\\n"
        "        /     \\\n"
        "       /  .-.  \\\n"
        "      /  ( @ )  \\\n"
        "     /  .-._.-.  \\\n"
        "    /  (  o o  )  \\\n"
        "   / ==.\\  -  /.== \\\n"
        "  /      '--'       \\\n"
        "  --------------------\n"
        "         #######\n"
        "         (  .  )\n"
        "          (   )\n"
        "         (     )\n"
        "         \"\"\"\"\"\n";
    }
    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor Called From ShrubberyCreationForm" << std::endl;
}