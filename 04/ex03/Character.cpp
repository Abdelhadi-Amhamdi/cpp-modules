/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:58:00 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/12 17:49:32 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int Character::max_items = 4;

Character::Character(){
	this->offset = 0;
	this->name = "Unknown";
	this->trash_offset = 0;
}

Character::Character(std::string name){
	this->offset = 0;
	this->name = name;
	this->trash_offset = 0;
}

Character::Character(const Character &c){
	this->offset = 0;
	this->trash_offset = 0;
	*this = c;
}

Character & Character::operator=(const Character &c) {
	if(this != &c)
	{
		for (int i = 0; i < this->offset; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
		}
		this->offset = c.offset;
		this->name = c.name;
		for (int i = 0; i < this->offset; i++)
			this->inventory[i] = c.inventory[i]->clone();
	}
	return(*this);
}

std::string const & Character::getName() const {
	return this->name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < this->max_items; i++) {
		if (this->inventory[i] == NULL && i < this->offset) {
			this->inventory[i] = m;
			return ;
		}
	}
	if (this->offset < this->max_items) {
		this->inventory[offset] = m;
		this->offset++;
	} else {
		std::cout << "Full inventory!" << std::endl;
		this->trash[this->trash_offset] = m;
		this->trash_offset++;
	}
}
void Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->max_items && this->trash_offset < 500) {
		this->trash[this->trash_offset] = this->inventory[idx];
		this->trash_offset++;
		this->inventory[idx] = NULL;
	} else
		std::cout << "Can't unequip item" << std::endl;
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < this->max_items && this->inventory[idx])
		this->inventory[idx]->use(target);
	else
		std::cout << "Materia not available!" << std::endl;
}

Character::~Character(){
	for (int i = 0; i < this->offset; i++)
	{
		if (this->inventory[i])
				delete this->inventory[i];
	}
	for (int i = 0; i < this->trash_offset; i++)
		delete this->trash[i];
}