/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:30:49 by slimane           #+#    #+#             */
/*   Updated: 2025/12/05 12:10:09 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AForm_HPP
#define AForm_HPP
#include <iostream>

class Bureaucrat;

class AForm
{
    private:
        const std::string name; 
        bool sgnd;
        const int grade_sngd;
        const int grade_exe;
    public:
        AForm();
        AForm(const std::string &n, int grade_sn, int grade_ex);
        AForm(const AForm &obj);
        AForm &operator=(const AForm &obj);
        ~AForm();

        const std::string &getName(void) const;
        bool getSignd(void) const;
        int getGradeSignd(void) const ;
        int getGradeExecute(void) const;

        void beSigned(Bureaucrat &obj);
        void execute(Bureaucrat const & executor) const;

        
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
        
        class NotSigned : public std::exception 
        {
            public:
                const char* what() const throw();
        };
};
std::ostream & operator<<(std::ostream &out, AForm &f);


#endif