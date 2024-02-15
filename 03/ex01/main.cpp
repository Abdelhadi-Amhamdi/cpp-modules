/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:05:18 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/06 12:25:32 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap a("abc");
	ClapTrap *b = &a;
	
	b->attack("xyz");
	a.attack("xyz");
	
	a.attack("xyz");
	a.takeDamage(9);
	a.guardGate();
	a.beRepaired(100);
	a.attack("xyz");
	a.attack("xyz");
	a.attack("xyz");
	a.attack("xyz");
	a.takeDamage(9);
	a.takeDamage(50);
	a.takeDamage(90);
	a.takeDamage(9);
	return (0);
}