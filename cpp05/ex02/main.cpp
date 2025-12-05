/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 18:19:25 by slimane           #+#    #+#             */
/*   Updated: 2025/12/05 18:23:06 by slimane          ###   ########.fr       */
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
        Bureaucrat bureau ;
        ShrubberyCreationForm robo("soulaimane");
        bureau.executeForm(robo);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}