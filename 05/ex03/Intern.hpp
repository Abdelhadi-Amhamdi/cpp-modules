/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:31:07 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/16 18:10:07 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_HPP
#define Intern_HPP
#include <iostream>
#include "AForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern &i);
		Intern & operator=(const Intern &i);
		AForm *makeForm(const std::string &type, const std::string &name);
		~Intern();
	private:
};

#endif
