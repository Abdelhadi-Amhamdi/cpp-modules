/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:23:14 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/10/27 15:25:12 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	std::string name;
	
	public:
	Zombie();
	void	set_name(const std::string &arg_name);
	void	announce(void);
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif