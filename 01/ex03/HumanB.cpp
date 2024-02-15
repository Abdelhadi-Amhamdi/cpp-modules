/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:22:00 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/02 11:11:27 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string arg_name) : name(arg_name), weapon(NULL) {}

HumanB::HumanB(std::string arg_name, Weapon &w) : name(arg_name), weapon(&w) {}

void HumanB::attack() {
	if (!weapon)
	{
		std::cout << name << " cant attack, Weapon not set!" << std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &arg_w) {
	weapon = &arg_w;
}

HumanB::~HumanB() {}
