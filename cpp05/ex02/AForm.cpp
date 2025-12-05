/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 11:04:40 by slimane           #+#    #+#             */
/*   Updated: 2025/12/05 12:10:29 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("AForm") , sgnd(false) , grade_sngd(150), grade_exe(145)
{
    std::cout << "the Constructor called from AForm" << std::endl;
}

AForm::AForm(const std::string &n, int grade_sn, int grade_ex) : name(n),   sgnd(false) , grade_sngd(grade_sn), grade_exe(grade_ex)
{
    std::cout << "the Parametrize Constructor called from AForm" << std::endl;
}

AForm::AForm(const AForm &obj) : name(obj.name),   sgnd(obj.sgnd) , 
                grade_sngd(obj.grade_sngd), grade_exe(obj.grade_exe)
{
    std::cout << "the Copy Constructor called from AForm" << std::endl;
}

AForm &AForm::operator=(const AForm &obj)
{
    if (this == &obj)
        return *this;
    *this = obj;
    std::cout << "the Copy assignment operator called from AForm" << std::endl;
    return *this;
}


const std::string &AForm::getName(void) const
{
    return (name);
}

bool AForm::getSignd(void) const
{
    return (sgnd);
}

int AForm::getGradeSignd(void)   const
{
    return (grade_sngd);
}

int AForm::getGradeExecute(void)  const
{
    return (grade_exe);
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("the Grade is too High to sign this from\n");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("the Grade is too low to sign this from\n");
}

const char *AForm::NotSigned::what() const throw()
{
    return ("the form is not sogned Awldi");
}

void AForm::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() > this->grade_sngd)
        throw GradeTooLowException();
    sgnd = true;
}


std::ostream & operator<< (std::ostream &out , AForm &f)
{
    out << "the name of this AForm " << f.getName()
        << " is signed ? : " << f.getSignd()
        << " the grade that can sign this AForm is " << f.getGradeSignd()
        << " the grade that can execute this AForm is " << f.getGradeExecute();
    return (out);
    
}

AForm::~AForm()
{
    std::cout << "the Destructor called from AForm" << std::endl;
}
