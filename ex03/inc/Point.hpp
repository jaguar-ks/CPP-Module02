/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:54:27 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/14 01:08:41 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Fixed.hpp"

class Point{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point( void ); //Default Constructor
        Point( Point const &point ); //Copy Constructor
        Point( const float x, const float y ); //Float arguments COnstructor
        ~Point( void ); //Destructor
        Point &operator=(Point const &point); //Copy assighment overload
        Fixed const getX() const ; //Return the X attribute
        Fixed const getY() const ; //Return the Y attribute

};

// bool bsp( Point const a, Point const b, Point const c, Point const point);
// Fixed &side_lenght(Point &a, Point &b);
