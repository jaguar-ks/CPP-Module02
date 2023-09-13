/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:54:03 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/13 05:46:07 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../inc/Point.hpp"

Point::Point( void ){
    std::cout << this->x  << " " << this->y << " " << __LINE__ << std::endl;
}

Point::~Point( void ){
}

Point::Point( const float x, const float y) : x(x), y(y) {
    std::cout << this->x  << " " << this->y << " " << __LINE__ << std::endl;
}

Point &Point::operator=(Point const &point){
    this->x = point.getX();
    this->y = point.getY();
    return *this;
}

Point::Point( Point const &point ){
    *this = point;
}

// Fixed &side_lenght(Point &a, Point &b){
//     Fixed x(b.getX() - a.getX());
//     Fixed y(b.getY() - a.getY());
//     Fixed xs(x * x);
//     Fixed ys(y * y);
// }

// bool bsp( Point const a, Point const b, Point const c, Point const point){
//     Fixed ab, bc, ca;
//     if ( 0)
//         return true;
//     return false;    

// }

void Point::setX(Fixed const &_x){
    this->x.setRawBits(_x.getRawBits());
}

void Point::setY(Fixed const &_y){
    this->y.setRawBits(_y.getRawBits());
}


Fixed const Point::getX() const {
    return this->x;
}

Fixed const Point::getY() const {
    return this->y;
}
