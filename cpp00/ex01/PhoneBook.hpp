/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:28:47 by slimane           #+#    #+#             */
/*   Updated: 2025/08/29 20:45:02 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "Contact.hpp"


class PhoneBook {
    private :
        Contact arr[8];
        int last_index;
    public :
        void ADD(std::string n, int i, std::string f_name, std::string l_name, std::string nick, std::string secret);
        void set_index(int i);
        int get_index();
        void print_contacts(void);
        void find_contact(std::string name);
};
#endif