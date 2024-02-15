/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:42:28 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/11 17:18:37 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->type = "WrongCat";
	std::cout << "WrongCat Default constructer called!" << std::endl;
}


WrongCat::WrongCat(const WrongCat &c){
	this->type = c.type;
	std::cout << "WrongCat Copy constructer called!" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &c) {
	std::cout << "WrongCat Copy assignment operator called!" << std::endl;
	if(this != &c)
		this->type = c.type;
	return(*this);
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat sound" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat object destroyed!" << std::endl;
}