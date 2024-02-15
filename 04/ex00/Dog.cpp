/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:37:15 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/09 11:38:27 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "Dog Default constructer called!" << std::endl;
}

Dog::Dog(const Dog &c) {
	this->type = c.type;
	std::cout << "Dog Copy constructer called!" << std::endl;
}

Dog & Dog::operator=(const Dog &c) {
	std::cout << "Dog Copy assignment operator called!" << std::endl;
	if(this != &c)
		this->type = c.type;
	return(*this);
}

void Dog::makeSound() const {
	std::cout << "dog sound" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog object destroyed!" << std::endl;
}
