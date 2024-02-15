/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:16:06 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/08 15:12:34 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	Name = "Unknown";
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string arg_name) {
	std::cout << "ScavTrap Parameterized constructor called" << std::endl;
	Name = arg_name;
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& c) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	Name = c.Name;
	Hit_points = c.Hit_points;
	Energy_points = c.Energy_points;
	Attack_damage = c.Attack_damage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& c) {
	std::cout << "ScavTrap Copy assignmnet operator called" << std::endl;
	if (&c != this)
	{
		Name = c.Name;
		Hit_points = c.Hit_points;
		Energy_points = c.Energy_points;
		Attack_damage = c.Attack_damage;
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (!Energy_points || !Hit_points)
	{
		std::cout << "ScavTrap " << Name << " can't attack" << " target " << target << "!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
	Energy_points--;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << Name << " is in Gate keeper mode!" << std::endl;
}
