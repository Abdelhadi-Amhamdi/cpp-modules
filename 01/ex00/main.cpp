/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:21:43 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/10/27 18:35:53 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie *z1;

	z1 = newZombie("abc");
	if (!z1)
		return (0);
	z1->announce();
	randomChump("xyz");
	delete z1;
	return (0);
}
