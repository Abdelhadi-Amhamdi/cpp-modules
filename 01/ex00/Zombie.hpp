/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:13:02 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/10/27 16:05:09 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	std::string name;

	public:
	Zombie(std::string name);
	void	announce(void);
	~Zombie();
};

Zombie	*newZombie(std::string arg_name);
void	randomChump(std::string arg_name);


#endif
