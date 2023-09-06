/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:32:11 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/06 13:49:22 by faksouss         ###   ########.fr       */
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
        Fixed();
        Fixed(Fixed const &obj);
        Fixed &operator=(Fixed const &obj);
        ~Fixed();
        int getRawBits ( void ) const;
        void setRawBits( int const raw );

};
