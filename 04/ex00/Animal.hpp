/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:33:19 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/10/30 12:16:19 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>


class Animal {
	public:
		Animal();
		Animal(const Animal &c);
		Animal & operator=(const Animal &c);
		virtual ~Animal();
		const std::string & getType() const;
		void setType(std::string &arg_type);
		virtual void makeSound() const ;
	protected:
		std::string type;
};



#endif