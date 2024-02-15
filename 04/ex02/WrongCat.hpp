/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:42:05 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/09 11:56:34 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
#define WrongCat_HPP
#include <iostream>

#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat &c);
		WrongCat & operator=(const WrongCat &c);
		void makeSound() const ;
		~WrongCat();
};

#endif

