/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:34:15 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/09 12:53:01 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Unknown") {
	std::cout << "Animal Default constructer called!" << std::endl;
}

Animal::Animal(const Animal &c) : type(c.type) {
	std::cout << "Animal Copy constructer called!" << std::endl;
}

Animal & Animal::operator=(const Animal &c) {
	std::cout << "Animal Copy assignment operator called!" << std::endl;
	if(this != &c)
		this->type = c.type;
	return(*this);
}

const std::string & Animal::getType() const {
	return (type);
}

void Animal::setType(std::string arg_type) {
	type = arg_type;
}

void Animal::makeSound() const {}

Animal::~Animal() {
	std::cout << "Animal object destroyed!" << std::endl;
}