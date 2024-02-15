/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:46:08 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/09 11:57:25 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Unknown") {
	std::cout << "WrongAnimal Default constructer called!" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &c) : type(c.type) {
	std::cout << "WrongAnimal Copy constructer called!" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &c) {
	std::cout << "WrongAnimal Copy assignment operator called!" << std::endl;
	if(this != &c)
		this->type = c.type;
	return(*this);
}

void WrongAnimal::makeSound() const {
	std::cout << "animal sound" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal object destroyed!" << std::endl;
}