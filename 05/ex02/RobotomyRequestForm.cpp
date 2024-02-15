/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:33:17 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/16 16:25:37 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
	AForm("target", 72, 45) {}


RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
	AForm(target, 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r) :
	AForm(r) {}

void RobotomyRequestForm::exec() const {
	srand(std::time(NULL));
	if (rand() % 2)
		std::cout << this->getName() << " has been robotomized successfully" << std::endl;
	else
		std::cout << "robotomy failed" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &r) {
	(void)r;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}