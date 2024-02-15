/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:02:45 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/07 12:56:05 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include<iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string arg_name);
		DiamondTrap(const DiamondTrap &c);
		DiamondTrap & operator=(const DiamondTrap &c);
		void whoAmI();
		~DiamondTrap();

	private:
		std::string Name;
};

#endif