/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:54:03 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/14 00:53:34 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../inc/Point.hpp"

Point::Point( void ){
    std::cout << "Point : Default constructor called" << std::endl;
}

Point::~Point( void ){
    std::cout << "Point : Deconstructor called" << std::endl;
}

Point::Point( const float x, const float y) : x(x), y(y) {
    std::cout << "Point : Float arguments constructor called" << std::endl;
}

Point &Point::operator=(Point const &point) {
    (void)point;
    return *this;
}

Point::Point( Point const &point ): x(point.getX()), y(point.getY()){
    std::cout << "Point : Copy constructor called" << std::endl;
}

Fixed const Point::getX() const {
    return this->x;
}

Fixed const Point::getY() const {
    return this->y;
}
