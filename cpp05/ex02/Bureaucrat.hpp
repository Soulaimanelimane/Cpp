/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 17:35:21 by slimane           #+#    #+#             */
/*   Updated: 2025/12/05 18:23:37 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BURAUCRAT_HPP
#define BURAUCRAT_HPP

#include <iostream>
#include <exception>

class AForm;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat & obj);
        Bureaucrat &operator=(const Bureaucrat &obj);
        ~Bureaucrat();

        const std::string &getName() const;
        int getGrade() const;

        void increment_grade();
        void decrement_grade();
        

        void signForm(AForm &obj);
        void executeForm(AForm const & form) const;
        
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception 
        {
            public:
                const char* what() const throw();
        };
        
};

std::ostream & operator<<(std::ostream &out , Bureaucrat & obj);


#endif