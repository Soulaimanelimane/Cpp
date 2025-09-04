/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:35:45 by slimane           #+#    #+#             */
/*   Updated: 2025/08/29 22:43:19 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H
#include <string>
#include <iostream>
#include <iomanip>
class Contact {
	private:
		std::string	num;
		int index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string darkest_secret;
	public :
        void set_contact(std::string n, int i, std::string f_name, std::string l_name, std::string nick, std::string secret);
		std::string get_name(int flag);
		int get_index(void);
};
#endif 