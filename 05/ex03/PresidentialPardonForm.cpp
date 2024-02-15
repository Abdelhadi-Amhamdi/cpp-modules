/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:33:24 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/16 16:25:31 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	AForm("target", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
	AForm(target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p) : 
	AForm(p) {}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &p) {
	(void)p;
	return (*this);
}

void PresidentialPardonForm::exec() const {
	std::cout << this->getName() << " has been pardoned by Zaphod Beebebrox" << std::endl;
}

PresidentialPardonForm *PresidentialPardonForm::clone() {
	return (new PresidentialPardonForm(this->getName()));
}

PresidentialPardonForm::~PresidentialPardonForm(){}