/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:54:03 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/11 04:12:43 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../inc/Point.hpp"

Point::Point( void ){
    this->x();
    this->y();
}

Point::~Point( void ){
}

Point::Point( float _x, float _y ){
    this->x(_x);
    this->y(_y);
}

Point::Point( Point &point ){
    *this = point;
}

Point &Point::operator=(Point &point){
    this->x = point.x;
    this->y = point.y;
    return *this;
}

Fixed &side_lenght(Point &a, Point &b){
    Fixed x(b.x - a.x);
    Fixed y(b.y - a.y);
    Fixed xs(x * x);
    Fixed ys(y * y);
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
    Fixed ab, bc, ca;
    if ( /*CONDITION*/ )
        return true;
    return false;    
}

void setPoint(Fixed &_x, Fixed &_y){
    this->x = _x;
    this->y = _y;
}

Point getPoint( void ){
    return *this;
}
