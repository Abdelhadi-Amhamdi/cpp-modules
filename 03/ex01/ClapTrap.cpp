/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:43:33 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/08 15:11:06 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap Default contructer called" << std::endl;
	this->Name = "Unknown";
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string &arg_name) {
	std::cout << "ClapTrap Parameterized constructer called" << std::endl;
	this->Name = arg_name;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& c) {
	std::cout << "ClapTrap copy constructer called" << std::endl;
	this->Name = c.Name;
	this->Hit_points = c.Hit_points;
	this->Energy_points = c.Energy_points;
	this->Attack_damage = c.Attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (&c != this)
	{
		this->Name = c.Name;
		this->Hit_points = c.Hit_points;
		this->Energy_points = c.Energy_points;
		this->Attack_damage = c.Attack_damage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {
	if (!Energy_points || !Hit_points)
	{
		std::cout << "ClapTrap " << Name << " can't attack" << " target " << target << "!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
	Energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (Hit_points)
		Hit_points -= amount;
	std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (Hit_points && Energy_points)
	{
		std::cout << "ClapTrap " << Name << " has been repaired with amount of " << amount << std::endl;
		Hit_points += amount;
		Energy_points--;
		return ;
	}
	std::cout << "ClapTrap " << Name << " cant be repaired" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}
