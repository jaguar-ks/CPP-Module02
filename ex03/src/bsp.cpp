/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:17:08 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/15 02:28:04 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

Fixed   abs(Fixed a){
    a <= (Fixed)(0) ? a * -1 : a;    
    return a;
}

Fixed triangleArea(Point a, Point b, Point c){
    Fixed _Area;
    _Area = (Fixed)(0.5f) * abs((a.getX() * (b.getY() - c.getY())) +
            (b.getX() * (c.getY() - a.getY())) +
            (c.getX() * (a.getY() - b.getY())));
    return _Area;
}

bool bsp( Point const a, Point const b, Point const c, Point const point ){
    Fixed abcArea, abpArea, acpArea, bcpArea;
    abcArea = triangleArea(a, b, c);
    abpArea = triangleArea(a, b, point);
    acpArea = triangleArea(a, c, point);
    bcpArea = triangleArea(b, c, point);

    // std::cout << "abc >> " << abcArea << std::endl;
    // std::cout << "abp >> " << abpArea << std::endl;
    // std::cout << "acp >> " << acpArea << std::endl;
    // std::cout << "bcp >> " << bcpArea << std::endl;

    if (abcArea == 0 || abpArea == 0 || acpArea == 0 || bcpArea == 0)
        return false;
    return ((abcArea == (abpArea + acpArea + bcpArea)));
}

