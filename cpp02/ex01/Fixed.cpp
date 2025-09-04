/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:16:40 by slimane           #+#    #+#             */
/*   Updated: 2025/09/04 14:56:33 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    fixed_point = roundf(value * (1 << fract_part));
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    fixed_point = value << fract_part;
}

float Fixed::toFloat(void) const
{
    return ((float)fixed_point / (1 << fract_part));
}

int Fixed::toInt(void) const 
{
    return (fixed_point >> fract_part);
}

Fixed::Fixed(const Fixed &obj)
{
    fixed_point = obj.fixed_point;
    std::cout << "Copy constructor called" << std::endl;
}
Fixed& Fixed::operator=(Fixed  const &obj)
{
    this->fixed_point = obj.fixed_point;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}
std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return out;
}

int Fixed::getRawBits( void )  const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed_point);
}
void Fixed::setRawBits(int const raw)
{
    fixed_point = raw;
}

Fixed::~Fixed (void)
{
    std::cout << "Destructor called" << std::endl;
}