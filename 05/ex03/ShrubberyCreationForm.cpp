/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:21:11 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/16 16:16:38 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("target", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s) :
	AForm(s) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
	AForm(target, 145, 137) {
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s) {
	(void)s;
	return (*this);
}

void ShrubberyCreationForm::exec() const {
		std::ofstream outFile((this->getName() + "_shrubbery").c_str());
		if (!outFile.is_open()) {
			std::cerr << "file not opened" << std::endl;
			return ;
		}
		for (size_t i = 0; i < 5; i++)
		{
		outFile << "\
		 _-_ \n \
	  /~~   ~~\\ \n\
	/~~         ~~\\ \n\
  {               } \n\
   \\  _-     -_  / \n\
	~  \\   /  ~ \n\
  _- -   | | _- _\n\
    _ -  | |   -_\n\
		/   \\ _\n" << std::endl;
		}
		
}

ShrubberyCreationForm *ShrubberyCreationForm::clone() {
	return (new ShrubberyCreationForm(this->getName()));
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}