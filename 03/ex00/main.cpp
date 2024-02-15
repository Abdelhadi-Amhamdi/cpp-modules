/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:05:18 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/06 12:08:38 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("abc");
	
	a.attack("xyz");
	a.takeDamage(9);
	a.beRepaired(10);
	a.takeDamage(10);
	a.attack("xyz");
	a.takeDamage(1);
	a.attack("xyz");
	a.beRepaired(10);
	return (0);
}