/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:33:19 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/12 16:15:55 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"


class Animal {
	public:
		Animal();
		Animal(const Animal &c);
		Animal & operator=(const Animal &c);
		virtual ~Animal();
		const std::string & getType() const;
		void setType(std::string arg_type);
		virtual void makeSound() const = 0;
	protected:
		std::string type;
};



#endif