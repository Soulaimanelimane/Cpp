/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slimane <slimane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:16:44 by slimane           #+#    #+#             */
/*   Updated: 2025/09/03 20:17:09 by slimane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>
#include <iostream>

class Fixed {
    private :
        int fixed_point;
        static const int fract_part = 8;
    public :
        Fixed();
        Fixed(const Fixed &obj);
        Fixed& operator = (Fixed& obj);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );    
};
#endif 