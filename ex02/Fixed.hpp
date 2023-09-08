/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:32:11 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/08 06:13:04 by faksouss         ###   ########.fr       */
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
        bool operator>( Fixed const &a ); // overloading greater than operator (>)
        bool operator<( Fixed const &a ); // overloading less than operator (>)
        bool operator>=( Fixed const &a ); // overloading greater than or equale operator (>=)
        bool operator<=( Fixed const &a ); // overloading less than or equale operator (>=)
        bool operator==( Fixed const &a ); // overloading equale operator (==)
        bool operator!=( Fixed const &a ); // overloading equale operator (==)
        Fixed &operator+( Fixed const &a );
        Fixed &operator-( Fixed const &a );
        Fixed &operator*( Fixed const &a );
        Fixed &operator/( Fixed const &a );
        Fixed &operator++(void);
};

std::ostream &operator<<( std::ostream &_out, Fixed const &obj );
