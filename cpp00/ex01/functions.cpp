/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:52:24 by slimane           #+#    #+#             */
/*   Updated: 2025/09/28 23:11:02 by slimane          ###   ########.fr       */
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
std::string miniminise(std::string str)
{
    if (str.size() > 10)
        return (str.substr(0, 9) + ".");
    else
        return (str);
}

void PhoneBook::print_contacts(int in)
{

    int i = 0;

    if (in >= 8)
        in = 8;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    while (i < in)
    {
        std::cout << "|" << std::setw(10) << i + 1 << "|" << std::setw(10) << miniminise(arr[i].get_name(1)) << "|" << std::setw(10) << miniminise(arr[i].get_name(2)) << "|" << std::setw(10) << miniminise(arr[i].get_name(3)) << "|" << std::endl;
        i++;
    }
}


int ft_isprint(std::string find) {
    int i = 0;
    while (find[i])
    {
        if (isprint(find[i]) == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int is_not_num(std::string str) {
    
    for (size_t i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]) != 1)
        {
            std::cerr << "the number phone should contain just numbers" << std::endl;
            return 1;
        }
    }
    return 0;
}

void PhoneBook::find_contact(int index , std::string find){
    
    int i = 0;
    if (index >= 8)
        index = 8;
    if (find == "\0" || !ft_isprint(find) || is_not_num(find))
        exit(1);
    int tofind = std::stoi(find);
    while (i < index)
    {
        if ((arr[i].get_index() + 1) == tofind)
        {
            std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
            std::cout << "|" << std::setw(10) << i + 1 << "|" << std::setw(10) << miniminise(arr[i].get_name(1)) << "|" << std::setw(10) << miniminise(arr[i].get_name(2)) << "|" << std::setw(10) << miniminise(arr[i].get_name(3)) << "|" << std::endl;
            return ;
        }
        i++;
    }
    std::cout <<  "Not found :( " << std::endl;
}