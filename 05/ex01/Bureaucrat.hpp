/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:47:19 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/14 15:45:53 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
	public:
		class GradeTooHighException: public std::exception {
			const char * what() const throw();
		};
		class GradeTooLowException: public std::exception {
			const char * what() const throw();
		};
		Bureaucrat();
		Bureaucrat(const Bureaucrat &b);
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat & operator=(const Bureaucrat &b);
		const	std::string & getName() const;
		int		getGrade() const;
		void	increment();
		void	decrement();
		void	signForm(Form &f);
		~Bureaucrat();
	private:
		const std::string	name;
		int			grade;
};

std::ostream & operator<<(std::ostream &ostream, const Bureaucrat &a);

#endif
