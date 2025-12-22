/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:36:27 by slimane           #+#    #+#             */
/*   Updated: 2025/12/21 18:25:32 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
Bureaucrat::Bureaucrat() : name("amghar") , grade(149)
{
    std::cout << "Bureaucrat the Constructor " << std::endl;
}

Bureaucrat::Bureaucrat(std::string n, int grd) : name(n), grade(grd)
{
    if (grd > 150)
        throw GradeTooHighException();
    else if (grd < 1)
        throw GradeTooLowException();
    std::cout << "Bureaucrat call the  parametrize Constructor " << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & obj) : name(obj.name)
{
    this->grade = obj.grade;
    std::cout << "Bureaucrat call Copy Constructor" << std::endl;
}



Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this == &obj)
        return *this;
    *this = obj;
    std::cout << "Bureaucrat call Copy assingment" << std::endl;
    return *this;
}


const std::string &Bureaucrat::getName() const
{
    return (name);
}
int Bureaucrat::getGrade() const
{
    return (grade);
}


const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Sorry Grade Too Low should be between 1 and 150\n");
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Sorry Grade Too High should be between 1 and 150\n") ;
}


void Bureaucrat::increment_grade()
{
    GradeTooHighException obj;
    int tmp = grade;
    tmp--;
    if (tmp <= 0)
        throw obj;
    grade--;
}
void Bureaucrat::decrement_grade()
{
    GradeTooLowException obj;
    int tmp = grade;
    tmp++;
    if (tmp > 150)
        throw obj;
    grade++;
}


void Bureaucrat::signForm(Form &obj)
{
    try
    {
        obj.beSigned(*this);
        std::cout << this->getName() << " signed " << obj.getName() << std::endl; 
    }
    catch (const Form::GradeTooLowException &e)
    {
        std::cout << this->getName() << " couldn't sign " << obj.getName() << " because "
            << " grade too low" << std::endl;
    }
    catch (const Form::GradeTooHighException &e)
    {
        std::cout << this->getName() << " couldn't sign " << obj.getName() << " because "
            << " grade too High" << std::endl;
    }
}

std::ostream & operator<<(std::ostream &out , Bureaucrat & obj)
{
    out <<  obj.getName() << ", bureaucrat grade" << obj.getGrade() << std::endl;
    return (out);
}


Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat call Destructor" << std::endl;
}