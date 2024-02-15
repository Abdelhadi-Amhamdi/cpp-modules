/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:13:26 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/01 15:10:11 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int value;
		static const int fractional_bits;
	public:
		Fixed();
		Fixed(const Fixed &c);
		Fixed & operator=(const Fixed &c);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif