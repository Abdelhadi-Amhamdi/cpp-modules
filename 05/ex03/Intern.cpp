/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:31:33 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/16 18:29:37 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &i) {(void)i;}

Intern& Intern::operator=(const Intern &i) {(void)i; return (*this);}

AForm * Intern::makeForm(const std::string &type, const std::string &name) {

	int i = (type == "robotomy request") * 1 + (type == "presidential pardon") * 2 + (type == "shrubbery creation") * 3;
	if (!i) {
		std::cout << type << " is an invalid type" << std::endl;
		return NULL;
	}
	AForm *arr[3] = {new (std::nothrow) RobotomyRequestForm(name), new (std::nothrow) PresidentialPardonForm(name), new (std::nothrow) ShrubberyCreationForm(name)};
	if (!arr[0] || !arr[1] || !arr[2])
	{
		for (size_t i = 0; i < 3; i++) {
			if (!arr[i])
				break ;
			delete arr[i];
		}
		return (NULL);
	}
	AForm *temp = NULL;
	std::cout << "Intern creates " << type << std::endl;
	try {
		temp = (arr[i - 1])->clone();
	} catch(std::exception &p) {
		std::cout << p.what() << std::endl;
	}
	for (int i = 0; i < 3; i++)
		delete arr[i];
	return (temp);
}

Intern::~Intern(){}
