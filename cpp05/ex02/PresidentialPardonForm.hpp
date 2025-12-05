/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 10:59:36 by slimane           #+#    #+#             */
/*   Updated: 2025/12/05 15:30:45 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
           std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const &_target);
        PresidentialPardonForm(const PresidentialPardonForm &obj);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &obj);
        ~PresidentialPardonForm();

        void execute(Bureaucrat const & executor) const;
};




#endif