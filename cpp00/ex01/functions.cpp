/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:52:24 by slimane           #+#    #+#             */
/*   Updated: 2025/08/29 22:44:43 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::set_contact(std::string n, int i, std::string f_name, std::string l_name, std::string nick, std::string secret)
{
    num = n;
    index = i % 8;
    first_name = f_name;
    last_name = l_name;
    nickname = nick;
    darkest_secret = secret;
}

void PhoneBook::ADD(std::string n, int i, std::string f_name, std::string l_name, std::string nick, std::string secret){
    arr[i % 8].set_contact(n, i, f_name, l_name, nick, secret);
}

void PhoneBook::set_index(int i)
{
    last_index = i % 8;
}
int Contact::get_index()
{
    return (index);
}

std::string Contact::get_name(int flag)
{
    if (flag == 1)
        return (first_name);
    else if (flag == 2)
        return (last_name);
    else if (flag == 3)
        return (nickname);
    return ("");
}

void PhoneBook::print_contacts(void)
{
    int i = 0;

    while (i < last_index)
    {
        std::cout << "index " << arr[i].get_index()  <<  "| first name->" + arr[i].get_name(1) + "| last name ->" + arr[i].get_name(2) + "| nickname ->" + arr[i].get_name(3) +"\n";
        i++;
    }
}

std::string miniminise(std::string str)
{
    if (str.size() > 10)
        return (str.substr(0, 9) + ".");
    else
        return (str);
}

void PhoneBook::find_contact(std::string name){
    
    int i = 0;
    while (i < last_index)
    {
        if (arr[i].get_name(1) == name)
        {
            std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
            std::cout << "|" << std::setw(10) << i + 1 << "|" << std::setw(10) << miniminise(arr[i].get_name(1)) << "|" << std::setw(10) << miniminise(arr[i].get_name(2)) << "|" << std::setw(10) << miniminise(arr[i].get_name(3)) << "|" << std::endl;
            return ;
        }
        i++;
    }
    std::cout <<  "Not found :( " << std::endl;
}