/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:38:04 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/12 16:13:42 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Default constructer called!" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &c) {
	std::cout << "Cat Copy constructer called!" << std::endl;
	this->brain = NULL;
	*this = c;
}

Cat & Cat::operator=(const Cat &c) {
	std::cout << "Cat Copy assignment operator called!" << std::endl;
	if(this != &c) {
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*(c.brain));
		this->type = c.type;
	}
	return(*this);
}

void Cat::makeSound() const {
	std::cout << "cat sound" << std::endl;
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "Cat object destroyed!" << std::endl;
}