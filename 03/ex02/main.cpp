/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:05:18 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/06 12:40:10 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap a("abc");
	
	a.attack("xyz");
	a.takeDamage(9);
	a.highFivesGuys();
	a.beRepaired(100);
	a.attack("xyz");
	a.takeDamage(90);
	a.takeDamage(9);
	return (0);
}