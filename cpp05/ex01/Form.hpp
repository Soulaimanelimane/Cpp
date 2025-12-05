/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 11:04:44 by slimane           #+#    #+#             */
/*   Updated: 2025/12/05 12:10:51 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>

class Bureaucrat;

class Form
{
    private:
        const std::string name; 
        bool sgnd;
        const int grade_sngd;
        const int grade_exe;
    public:
        Form();
        Form(const std::string &n, int grade_sn, int grade_ex);
        Form(const Form &obj);
        Form &operator=(const Form &obj);
        ~Form();

        const std::string &getName(void) const;
        bool getSignd(void) const;
        int getGradeSignd(void) const;
        int getGradeExecute(void) const;

        void beSigned(Bureaucrat &obj);

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
std::ostream & operator<<(std::ostream &out, Form &f);


#endif