/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:09:53 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/14 15:46:19 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() 
	: name("unk"), is_signed(false), grade_to_sign(1), grade_to_exc(1) {}

Form::Form(const std::string &name, int sign_grade, int exc_grade) 
	: name (name), is_signed(false), grade_to_sign(sign_grade), grade_to_exc(exc_grade)
{
	if (this->grade_to_sign <= 0 || this->grade_to_exc <= 0)
		throw GradeTooHighException();
	else if (this->grade_to_sign > 150 || this->grade_to_exc > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &f) 
	: name(f.getName()), is_signed(f.signed_form()), grade_to_sign(f.signGrade()), grade_to_exc(f.excGrade()) {}

Form & Form::operator=(const Form &f) {
	if (this != &f) {
		const_cast<std::string&>(this->name) = f.getName();
		const_cast<int&>(this->grade_to_sign) = f.signGrade();
		const_cast<int&>(this->grade_to_exc) = f.excGrade();
		this->is_signed = f.signed_form();
	}
	return (*this);
}

const char * Form::GradeTooHighException::what() const throw() {
	return ("GradeTooHighException");
}

const char * Form::GradeTooLowException::what() const throw() {
	return ("GradeTooLowException");
}

const std::string Form::getName() const {return this->name;}

bool Form::signed_form() const {return this->is_signed;}

int Form::signGrade() const { return this->grade_to_sign;}

int Form::excGrade() const { return this->grade_to_exc;}

void Form::beSigned(const Bureaucrat &b) {
	if (b.getGrade() <= this->grade_to_sign)
		this->is_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream &ostream, const Form &a) {
	ostream << a.getName() << " requires " << a.signGrade() << " grade to sign and " << a.excGrade() << " grade to execute" << std::endl;
	return ostream;
}

Form::~Form(){}