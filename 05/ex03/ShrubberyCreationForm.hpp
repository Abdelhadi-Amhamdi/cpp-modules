/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:08:07 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/15 20:43:48 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP
#include <iostream>

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &s);
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &s);
		ShrubberyCreationForm(const std::string &target);
		void exec() const;
		ShrubberyCreationForm *clone();
		~ShrubberyCreationForm();
	private:
};

#endif

