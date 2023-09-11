/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:54:27 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/11 04:13:45 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Fixed.hpp"

class Point{
    private:
        Fixed x;
        Fixed y;
    public:
        Point( void );
        Point( Point &point );
        Point( float _x, float _y );
        ~Point( void );
        Point &operator=(Point &point);
        void setPoint(Fixed &_x, Fixed &_y);
        Point getPoint( void );
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
Fixed &side_lenght(Point &a, Point &b);
