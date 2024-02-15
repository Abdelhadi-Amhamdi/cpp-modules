/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:58:13 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/16 16:25:21 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Intern someRandomIntern;
	Bureaucrat a("abc", 1);
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (!rrf)
		return (0);
	try {
		rrf->beSigned(a);
		rrf->execute(a);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	delete rrf;
	return (0);
}