/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:24:56 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/10/27 15:28:37 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	if (N <= 0)
	{
		std::cout << "the given length not valid" << std::endl;
		return (NULL);
	}
	Zombie* z = new Zombie[N];
	if (!z)
		return (NULL);
	for (int i = 0; i < N; i++)
		z[i].set_name(name);
	return (z);
}
