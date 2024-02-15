/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:22:29 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/10/27 15:32:41 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	std::string type;

	public:
	Weapon(std::string arg_type);
	const	std::string&	getType();
	void	setType(const std::string &arg_type);
	~Weapon();
};

#endif