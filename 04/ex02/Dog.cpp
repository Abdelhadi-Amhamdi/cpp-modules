/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:37:15 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/12 16:14:31 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Default constructer called!" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &c) {
	std::cout << "Dog Copy constructer called!" << std::endl;
	this->brain = NULL;
	*this = c;
}

Dog & Dog::operator=(const Dog &c) {
	std::cout << "Dog Copy assignment operator called!" << std::endl;
	if(this != &c){
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*(c.brain));
		this->type = c.type;
	}
	return(*this);
}

void Dog::makeSound() const {
	std::cout << "dog sound" << std::endl;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog object destroyed!" << std::endl;
}