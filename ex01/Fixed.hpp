/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:32:11 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/06 05:37:20 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<cmath>

class Fixed {
    private:
        int fp;
        static const int fb = 8;
    public:
        Fixed( void ); // Defaulte
        Fixed( Fixed const &obj ); // Copy constructor
        Fixed &operator=( Fixed const &obj ); // Copy assignemnt ooperator
        Fixed( int const nb ); // int constructor
        Fixed( float const nb ); // float constructor
        ~Fixed( void ); // destructor
        int getRawBits ( void ) const; // return the fixed point
        void setRawBits( int const raw ); // edit the fixed point
        int toInt( void ) const; // convert the fixed point to intger
        float toFloat( void ) const; // convert the fixed point to floating point
};

std::ostream &operator<<( std::ostream const &out, Fixed const &obj );
