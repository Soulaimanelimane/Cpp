/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 11:04:40 by slimane           #+#    #+#             */
/*   Updated: 2025/12/21 18:25:46 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("form") , sgnd(false) , grade_sngd(150), grade_exe(145)
{
    std::cout << "the Constructor called from Form" << std::endl;
}

Form::Form(const std::string &n, int grade_sn, int grade_ex) : name(n),   sgnd(false) , grade_sngd(grade_sn), grade_exe(grade_ex)
{
    if (grade_sn < 1 || grade_ex < 1)
        throw GradeTooLowException();
    else if (grade_ex > 150 || grade_sn > 150)
        throw GradeTooHighException();
    std::cout << "the Parametrize Constructor called from Form" << std::endl;
}

Form::Form(const Form &obj) : name(obj.name),   sgnd(obj.sgnd) , 
                grade_sngd(obj.grade_sngd), grade_exe(obj.grade_exe)
{
    std::cout << "the Copy Constructor called from Form" << std::endl;
}

Form &Form::operator=(const Form &obj)
{
    if (this == &obj)
        return *this;
    *this = obj;
    std::cout << "the Copy assignment operator called from Form" << std::endl;
    return *this;
}


const std::string &Form::getName(void) const
{
    return (name);
}

bool Form::getSignd(void) const
{
    return (sgnd);
}

int Form::getGradeSignd(void)   const
{
    return (grade_sngd);
}

int Form::getGradeExecute(void) const
{
    return (grade_exe);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("the Grade is too High to sign this from\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("the Grade is too low to sign this from\n");
}

void Form::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() > this->grade_sngd)
        throw GradeTooLowException();
    sgnd = true;
}


std::ostream & operator<< (std::ostream &out , Form &f)
{
    out << "the name of this form " << f.getName()
        << " is signed ? : " << f.getSignd()
        << " the grade that can sign this form is " << f.getGradeSignd()
        << " the grade that can execute this form is " << f.getGradeExecute();
    return (out);
    
}

Form::~Form()
{
    std::cout << "the Destructor called from Form" << std::endl;
}
