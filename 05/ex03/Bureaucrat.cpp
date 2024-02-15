/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:11:46 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/16 16:24:33 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("unk"), grade(1) {}

Bureaucrat::Bureaucrat(const std::string & name, int grade) 
: name(name) , grade(grade) {
	if (this->grade <= 0)
		throw GradeTooHighException();
	else if (this->grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) 
	: name(b.getName()), grade(b.getGrade()) {}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &b) {
	if (this != &b) {
		const_cast<std::string&>(this->name) = b.getName();
		this->grade = b.getGrade();
	}
	return (*this);
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return ("GradeTooHighException");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return ("GradeTooLowException");
}

const std::string & Bureaucrat::getName() const {
	return (this->name);
}

int Bureaucrat::getGrade() const {
	return (this->grade);
}

void Bureaucrat::increment() {
	if (this->grade == 1)
		throw GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrement() {
	if (this->grade == 150)
		throw GradeTooLowException();
	this->grade++;
}

void Bureaucrat::executeForm(AForm const & form) {
	try {
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::signForm(AForm &f) {
	try {
		f.beSigned((*this));
		std::cout << this->name << " signed " << f.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << this->getName() << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream & operator<<(std::ostream &ostream, const Bureaucrat &a) {
	ostream << a.getName() << ", bureaucrat grade " << a.getGrade() << ".";
	return (ostream);
}

Bureaucrat::~Bureaucrat(){}