/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:02:35 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/08 15:22:27 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructer called" << std::endl;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string arg_name) : ClapTrap(arg_name + "_clap_name") {
	std::cout << "DiamondTrap constructer called" << std::endl;
	this->Name = arg_name;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &c) {
	std::cout << "DiamondTrap copy constructer called" << std::endl;
	*this = c;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &c) {
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &c) {
		this->Name = c.Name;
		this->Hit_points = c.Hit_points;
		this->Energy_points = c.Energy_points;
		this->Attack_damage = c.Attack_damage;
	}
	return (*this);
}

void DiamondTrap::whoAmI() {
	std::cout << "I'm " << Name << " - " << Name << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Diamond dstructor called" << std::endl;
}
