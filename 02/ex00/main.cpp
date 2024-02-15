/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:13:08 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/03 15:17:31 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed c;
	Fixed b( a );
	b.setRawBits(33);
	c = b;
	std::cout << a.getRawBits() << std::endl;
	a.setRawBits(4);
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
