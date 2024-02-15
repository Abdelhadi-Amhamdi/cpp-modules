/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:09:28 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/15 17:20:06 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() 
	: name(""), is_signed(false), grade_to_sign(1), grade_to_exc(1) {}

AForm::AForm(const AForm &f) 
: name(f.getName()), is_signed(f.signed_form()), grade_to_sign(f.signGrade()), grade_to_exc(f.excGrade()) {}

AForm & AForm::operator=(const AForm &f) {
	(void)f;
	return (*this);
}

const char * AForm::GradeTooHighException::what() const throw() {
	return ("GradeTooHighException");
}

const char * AForm::GradeTooLowException::what() const throw() {
	return ("GradeTooLowException");
}

AForm::AForm(const std::string &name, int sign_grade, int exc_grade) 
	: name (name), is_signed(false), grade_to_sign(sign_grade), grade_to_exc(exc_grade)
{
	if (this->grade_to_sign <= 0 || this->grade_to_exc <= 0)
		throw GradeTooHighException();
	else if (this->grade_to_sign > 150 || this->grade_to_exc > 150)
		throw GradeTooLowException();
}

void AForm::execute(Bureaucrat const &exc) const {
	if (this->signed_form() && exc.getGrade() <= this->excGrade()) {
		this->exec();
	} else
		throw GradeTooLowException();
}

const std::string AForm::getName() const {return this->name;}

bool AForm::signed_form() const {return this->is_signed;}

int AForm::signGrade() const {return this->grade_to_sign;}

int AForm::excGrade() const {return this->grade_to_exc;}

void AForm::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= this->grade_to_sign)
		this->is_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream &ostream, const AForm &a) {
	ostream << a.getName() << " requires " << a.signGrade() << " grade to sign and " << a.excGrade() << " grade to execute" << std::endl;
	return ostream;
}

AForm::~AForm(){}