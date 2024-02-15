/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:22:18 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/10/27 15:32:53 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string arg_type): type(arg_type) {}

const std::string&	Weapon::getType() {
	return (type);
}

void	Weapon::setType(const std::string &arg_type) {
	type = arg_type;
}

Weapon::~Weapon() {}
