/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:51:27 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/10/27 15:59:42 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main() {
	Harl H;
	std::string data;

	std::cout << "[LEVEL1 : debug]" << std::endl;
	H.complain("DEBUG");
	std::cout << "[LEVEL2 : info]" << std::endl;
	H.complain("INFO");
	std::cout << "[LEVEL3 : warning]" << std::endl;
	H.complain("WARNING");
	std::cout << "[LEVEL4 : error]" << std::endl;
	H.complain("ERROR");

	while (1)
	{
		std::cout << "entre a level to test Harl" << std::endl;
		std::getline(std::cin, data);
		if (data == "EXIT" || data == "exit" || std::cin.eof())
			break ;
		H.complain(data);
	}
	return (0);
}
