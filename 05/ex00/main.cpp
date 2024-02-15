/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:30:53 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/13 18:08:06 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat a("jim", 3);
		a.increment();
		std::cout << a << std::endl;
		a.increment();
		std::cout << a << std::endl;
		a.decrement();
		std::cout << a << std::endl;
		a.increment();
		std::cout << a << std::endl;
		a.increment();
		std::cout << a << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
