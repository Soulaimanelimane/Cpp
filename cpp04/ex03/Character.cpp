/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 19:24:23 by slimane           #+#    #+#             */
/*   Updated: 2025/11/06 22:41:39 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter()
{
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
    std::cout << "default Constructor called From Character" << std::endl;
}

Character::Character(std::string const &name) : ICharacter(name)
{
    for (int i = 0; i < 4; i++)
        slots[i] = NULL;
    std::cout << "Parametrize Constructor called From Character" << std::endl;
}

Character::Character(Character const &obj)
{
    std::cout << "Copy Constructor called From Character" << std::endl;
    name = obj.name;
    for (int i = 0; (obj.slots[i] && i < 4); i++)
        slots[i] = obj.slots[i]->clone();
}

Character & Character::operator=(Character const &obj)
{
    if (this == &obj)
        return *this;
    std::cout << "Copy assingment operator called From Character" << std::endl;
    name = obj.name;
    for (int i = 0; (obj.slots[i] && i < 4); i++)
        slots[i] = obj.slots[i]->clone();
}

std::string const & Character::getName()
{
    return name;
}


void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (slots[i] == NULL)
        {
            slots[i] = m;
            return ;
        }
    }
    std::cout << "there is no place to equip this Materia" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
    {
        std::cout << "this index is out of range enter 0 <= i < 4";
        return ;
    }
    slots[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > 3 || idx < 0)
    {
        std::cout << "this index is out of range enter 0 <= i < 4";
        return ;
    }
    if (slots[idx] == NULL)
    {
        std::cout << "cannot use this element because is  empty" << std::endl;
        return ;
    }
    slots[idx]->use(target);
}


Character::~Character()
{
    std::cout << "Destructor Called From Character" << std::endl;
}