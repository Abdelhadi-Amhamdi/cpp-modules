/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:33:00 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/16 15:43:16 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP
#include <iostream>

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &p);
		PresidentialPardonForm & operator=(const PresidentialPardonForm &p);
		PresidentialPardonForm(const std::string &target);
		void exec() const;
		PresidentialPardonForm *clone();
		~PresidentialPardonForm();
	private:
};

#endif

