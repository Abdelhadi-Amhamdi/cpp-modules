/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:29:03 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/09 12:48:55 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Default constructer called!" << std::endl;
}
Brain::Brain(const Brain &c){
	(void)c;
	std::cout << "Brain Copy constructer called!" << std::endl;
}

Brain & Brain::operator=(const Brain &c) {
	(void)c;
	std::cout << "brain Copy assignment operator called!" << std::endl;
	return(*this);
}

Brain::~Brain(){
	std::cout << "brain deleted!" << std::endl;
}