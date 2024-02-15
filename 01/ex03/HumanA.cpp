/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:21:52 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/10/22 16:14:37 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &arg_w) : name(name) , a_weapon(arg_w) {};

void HumanA::attack() {
	std::cout << name << " attacks with their " << a_weapon.getType() << std::endl;
}

HumanA::~HumanA() {}
