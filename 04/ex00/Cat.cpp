/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:38:04 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/09 11:38:15 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "Cat Default constructer called!" << std::endl;
}

Cat::Cat(const Cat &c) {
	this->type = c.type;
	std::cout << "Cat Copy constructer called!" << std::endl;
}

Cat & Cat::operator=(const Cat &c) {
	std::cout << "Cat Copy assignment operator called!" << std::endl;
	if(this != &c)
		this->type = c.type;
	return(*this);
}

void Cat::makeSound() const {
	std::cout << "cat sound" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat object destroyed!" << std::endl;
}