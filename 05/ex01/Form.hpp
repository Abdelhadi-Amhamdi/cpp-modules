/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:10:04 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/15 17:06:44 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		class GradeTooHighException: public std::exception {
			const char * what() const throw();
		};
		class GradeTooLowException: public std::exception {
			const char * what() const throw();
		};
		Form();
		Form(const std::string &name, int sign_grade, int exc_grade);
		Form(const Form &f);
		Form &	operator=(const Form &f);
		const	std::string getName() const;
		bool	signed_form() const;
		int		signGrade() const ;
		int		excGrade() const ;
		void	beSigned(const Bureaucrat &b);
		~Form();
	private:
		const std::string	name; 
		bool		is_signed;
		const int	grade_to_sign;
		const int	grade_to_exc;
};

std::ostream& operator<<(std::ostream &ostream, const Form &a);

#endif

