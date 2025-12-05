/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:26:07 by slimane           #+#    #+#             */
/*   Updated: 2025/12/05 15:30:09 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("lmesskin", 25, 5) ,  target("void")
{
    std::cout << "the Default Constructor Called from PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &_target) : AForm("lmesskin", 25, 5) ,  target(_target)
{
    std::cout << "the Parametrize Constructor Called from PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm   &obj) : AForm(obj), target(obj.target)
{
    std::cout << "the Copy Constructor Called from PresidentialPardonForm" << std::endl;
            
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    if (this == &obj)
        return *this;
    (AForm::operator=(obj));
    this->target = obj.target;
    std::cout << "the Copy assignment operator Called from PresidentialPardonForm" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSignd())
        throw AForm::NotSigned();
    if (execute.getGrade() > this->getGradeExecute())
        throw AForm::GradeTooLowException();
    
    std::cout << target+ " has been pardoned by Zaphod Beeblebrox" << std::endl; ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor Called From PresidentialPardonForm" << std::endl;
}