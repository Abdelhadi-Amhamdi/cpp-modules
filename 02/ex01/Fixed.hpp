/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:54:09 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/03 15:21:01 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &c);
		Fixed(const int v);
		Fixed(const float v);
		~Fixed();
		Fixed &	operator=(const Fixed &c);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
	private:
		static const int fract_value;
		int value;


};

std::ostream& operator<<(std::ostream& stream, const Fixed &f);

#endif