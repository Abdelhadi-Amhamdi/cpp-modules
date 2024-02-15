/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:15:45 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/10/27 15:27:55 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z;
	int		n;

	n = 5;
	z = zombieHorde(n, "abc");
	if (!z)
		return (0);
	for (int i = 0; i < n; i++)
		z[i].announce();
	delete [] z;
	return (0);
}