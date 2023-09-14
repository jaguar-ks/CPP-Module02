/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:17:08 by faksouss          #+#    #+#             */
/*   Updated: 2023/09/14 18:50:22 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point ){
    Fixed ab, bc, ca;
    ab = sqrtf(powf((b.getX() - a.getX()).toFloat(), 2) + powf((b.getY() - a.getY()).toFloat(), 2));
    bc = sqrtf(powf((c.getX() - b.getX()).toFloat(), 2) + powf((c.getY() - b.getY()).toFloat(), 2));
    ca = sqrtf(powf((a.getX() - c.getX()).toFloat(), 2) + powf((a.getY() - c.getY()).toFloat(), 2));;
    Fixed ap, bp, cp;
    ap = sqrtf(powf((point.getX() - a.getX()).toFloat(), 2) + powf((point.getY() - a.getY()).toFloat(), 2));
    bp = sqrtf(powf((point.getX() - b.getX()).toFloat(), 2) + powf((point.getY() - b.getY()).toFloat(), 2));;
    cp = sqrtf(powf((point.getX() - c.getX()).toFloat(), 2) + powf((point.getY() - c.getY()).toFloat(), 2));
    Fixed p, p1, p2, p3;
    p = (ab + bc + ca) / 2;
    p1 = (ab + ap + bp) / 2;
    p2 = (bc + bp + cp) / 2;
    p3 = (ca + cp + ap) / 2;
    Fixed area, area1, area2, area3;
    area = sqrtf((p * (p - ab) * (p - bc) * (p - ca)).toFloat());
    area1 = sqrtf((p1 * (p1 - ab) * (p1 - ap) * (p1 - bp)).toFloat());
    area2 = sqrtf((p2 * (p2 - bc) * (p2 - bp) * (p2 - cp)).toFloat());
    area3 = sqrtf((p3 * (p3 - ca) * (p3 - cp) * (p3 - ap)).toFloat());
    if (area == (area1 + area2 + area3) && (area1 != 0 && area2 != 0 && area3 != 0))
        return true;
    return false;
}

