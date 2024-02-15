/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:03:10 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/04 19:25:43 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {
	Point a(8, 8);
	Point b(8, 5);
	Point c(2, 4);
	Point p(2.5, 4.1);

	if (bsp(a, b, c, p))
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
	return (0);
}
