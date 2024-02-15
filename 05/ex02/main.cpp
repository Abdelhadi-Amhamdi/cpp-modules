/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:58:13 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/16 16:25:21 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Bureaucrat c("abc", 1);
	
	try {
		AForm *a = new ShrubberyCreationForm("");
		try {
			a->beSigned(c);
			c.executeForm((*a));
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		delete a;
		AForm *b = new RobotomyRequestForm("abc");
		try {
			b->beSigned(c);
			c.executeForm((*b));
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		delete b;
		
		AForm *d = new PresidentialPardonForm("xyz");
		try {
			d->beSigned(c);
			c.executeForm((*d));
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		delete d;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return (0);
}