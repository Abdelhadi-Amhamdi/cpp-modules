/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:36:39 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/08 15:24:40 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
	Hit_points = 100;
	Energy_points = 100;
	Attack_damage = 30;
}

FragTrap::FragTrap(const std::string &arg_name) {
	std::cout << "FragTrap Paramertized constructor called" << std::endl;
	Name = arg_name;
	Hit_points = 100;
	Energy_points = 100;
	Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &c) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
	Name = c.Name;
	Hit_points = c.Hit_points;
	Energy_points = c.Energy_points;
	Attack_damage = c.Attack_damage;
}

FragTrap & FragTrap::operator=(const FragTrap &c) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &c){
		this->Name = c.Name;
		this->Hit_points = c.Hit_points;
		this->Energy_points = c.Energy_points;
		this->Attack_damage = c.Attack_damage;
	}
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap deconstructer called" << std::endl;
}
void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << Name << " positive high fives request" << std::endl;
}
