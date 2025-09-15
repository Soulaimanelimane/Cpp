/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:28:47 by slimane           #+#    #+#             */
/*   Updated: 2025/09/15 20:36:03 by slimane          ###   ########.fr       */
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
        void print_contacts(int in);
        void find_contact(int index , std::string find);
};
#endif