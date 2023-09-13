/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:54:27 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/14 00:32:17 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Fixed.hpp"

class Point{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point( void );
        Point( Point const &point );
        Point( const float x, const float y );
        ~Point( void );
        Point &operator=(Point const &point);
        void setX(Fixed const &x);
        void setY(Fixed const &y);
        Fixed const getX() const ;
        Fixed const getY() const ;

};

// bool bsp( Point const a, Point const b, Point const c, Point const point);
// Fixed &side_lenght(Point &a, Point &b);
