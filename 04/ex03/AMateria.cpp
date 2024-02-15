/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:17:03 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/11 16:58:19 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::AMateria(const AMateria &c) {
	(void)c;
}

AMateria & AMateria::operator=(const AMateria &c) {
	(void)c;
	return(*this);
}

std::string const & AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter &target) {
	(void)target;
}

AMateria::~AMateria(){}
