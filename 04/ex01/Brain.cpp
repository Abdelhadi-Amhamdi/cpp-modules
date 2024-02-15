/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:29:03 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/11 18:05:11 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Default constructer called!" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "idea";
}
Brain::Brain(const Brain &c){
	std::cout << "Brain Copy constructer called!" << std::endl;
	*this = c;
}

Brain & Brain::operator=(const Brain &c) {
	std::cout << "brain Copy assignment operator called!" << std::endl;
	if (this != &c) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = c.ideas[i];
	}
	return(*this);
}

Brain::~Brain(){
	std::cout << "brain deleted!" << std::endl;
}