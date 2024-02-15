/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:07:33 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/12 17:48:19 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(){
	this->offset = 0;
}

MateriaSource::MateriaSource(const MateriaSource &c){
	this->offset = 0;
	*this = c;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &c) {
	if(this != &c)
	{
		for (int i = 0; i < this->offset; i++)
			delete this->skills[i];
		this->offset = c.offset;
		for (int i = 0; i < this->offset; i++)
			this->skills[i] = c.skills[i]->clone();
	}
	return(*this);
}

void MateriaSource::learnMateria(AMateria *a) {
	if (this->offset < 4)
	{
		this->skills[offset] = a;
		this->offset++;
	} else
		std::cout << "Can't learn more materias" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->offset; i++)
	{
		if (this->skills[i] && this->skills[i]->getType() == type)
			return (this->skills[i]->clone());
	}
	return (0);
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < this->offset; i++)
		delete this->skills[i];
}