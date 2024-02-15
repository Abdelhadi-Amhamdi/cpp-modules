/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:23:22 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/10/27 15:59:12 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {
	std::string filter;
	Harl H;

	if (ac != 2)
	{
		std::cout << "invalid args" << std::endl;
		return (0);
	}
	filter = av[1];
	H.complain(filter);
	return (0);
}
