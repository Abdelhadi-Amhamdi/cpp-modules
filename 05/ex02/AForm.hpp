/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:07:24 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/15 17:41:27 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	public:
		class GradeTooHighException: public std::exception {
			const char * what() const throw();
		};
		class GradeTooLowException: public std::exception {
			const char * what() const throw();
		};
		AForm();
		AForm(const AForm &f);
		AForm(const std::string &name, int sign_grade, int exc_grade);
		AForm &	operator=(const AForm &f);
		const	std::string getName() const;
		bool	signed_form() const;
		int		signGrade() const ;
		int		excGrade() const ;
		void	beSigned(Bureaucrat &b);
		void	execute(Bureaucrat const &executor) const;
		virtual void exec() const = 0;
		virtual ~AForm();
	private:
		const	std::string	name; 
		bool		is_signed;
		const int	grade_to_sign;
		const int	grade_to_exc;
};

std::ostream& operator<<(std::ostream &ostram, const AForm &a);

#endif
