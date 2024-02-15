/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:30:53 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/14 15:52:03 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Bureaucrat a("jim", 1);
		Form b("abc", 2, 3);
		a.signForm(b);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat a("jim", 3);
		Form b("abc", 2, 3);
		a.signForm(b);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
