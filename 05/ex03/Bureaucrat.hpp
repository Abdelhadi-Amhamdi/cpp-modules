/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:11:30 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/16 16:22:17 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP
#include <iostream>

#include "AForm.hpp"

class AForm;

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
		void	executeForm(AForm const & form);
		const	std::string & getName() const;
		int		getGrade() const;
		void	increment();
		void	decrement();
		void	signForm(AForm &f);
		~Bureaucrat();
	private:
		const std::string	name;
		int			grade;
};

std::ostream & operator<<(std::ostream &ostream, const Bureaucrat &a);

#endif
