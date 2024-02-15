/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:03:03 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/04 20:14:49 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	absolute(Fixed nb) {
	if (nb.toFloat() < 0)
		return (nb.toFloat() * -1);
	return (nb);
}

Fixed	helper(Point const a, Point const b, Point const c) {
	Fixed _a((a.get_x() * b.get_y()) - ((b.get_x() * a.get_y())));
	Fixed _b((b.get_x() * c.get_y()) - ((c.get_x() * b.get_y())));
	Fixed _c((c.get_x() * a.get_y()) - ((a.get_x() * c.get_y())));
	return (absolute(_a + _b + _c).toFloat() / 2);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	t1_area(helper(point, a, b));
	Fixed	t2_area(helper(c, point, a));
	Fixed	t3_area(helper(c, point, b));
	Fixed	to_area(helper(a, b, c));
	Fixed	sum(t1_area + t2_area + t3_area);

	if (!t1_area.toFloat() || !t2_area.toFloat() || !t3_area.toFloat() || sum > to_area)
		return false;
	return true;
}
