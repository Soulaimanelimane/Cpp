/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 18:19:25 by slimane           #+#    #+#             */
/*   Updated: 2026/01/20 13:27:36 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureau("soul", 100);
        ShrubberyCreationForm shrub("soulaimane");
        RobotomyRequestForm robo("robo");
        PresidentialPardonForm pres("president");
        bureau.signForm(pres);
        bureau.executeForm(pres);
    }
    catch(const std::exception *e)
    {
        std::cerr << e->what() ;
    }
    
}