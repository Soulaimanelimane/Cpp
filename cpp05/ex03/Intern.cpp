/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 17:05:27 by slimane           #+#    #+#             */
/*   Updated: 2025/12/08 17:30:48 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
    std::cout <<"Intern Call the Default Constructor " << std::endl;
}

Intern::Intern(const Intern &obj)
{
    *this = obj;
    std::cout <<"Intern Call the Copy Constructor " << std::endl;
}

Intern & Intern::operator=(const Intern &obj)
{
    if (this != &obj)
    return (*this) ;
    std::cout <<"Intern Call the Copy assignment " << std::endl;
    return (*this);
}

AForm *Intern::makeForm(std::string name , std::string target)
{
    std::string arr[3] = {"robotomy request", "shrubbery creation" , "presidential pardon"};
    int find = -1;
    for (int i = 0; i < 3 && find == -1; i++)
    {
        if (name == arr[i])
            find = i;
    }
    
    switch (find)
    {
        case 0:
            std::cout << "Intern creates " << arr[0] << std::endl;
            return new RobotomyRequestForm(target);
        case 1:
            std::cout << "Intern creates " << arr[1] << std::endl;
            return new ShrubberyCreationForm(target);
        case 2:
            std::cout << "Intern creates " << arr[2] << std::endl;
            return new PresidentialPardonForm(target);
        default:
            std::cout << "the value you entered is not a valid form" << std::endl;
            return NULL;
            break;
    }
    
}

Intern::~Intern()
{
    std::cout <<"Intern Call the Destructor " << std::endl;
}
