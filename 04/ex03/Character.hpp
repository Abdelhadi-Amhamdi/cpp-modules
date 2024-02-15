/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:57:08 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/12 17:50:25 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
#define Character_HPP
#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		Character();
		Character(std::string name);
		Character(const Character &c);
		Character & operator=(const Character &c);
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		std::string const & getName() const;
		~Character();
	protected:
		std::string	name;
		AMateria	*inventory[4];
		AMateria	*trash[500];
		int			offset;
		static int 	max_items;
		int			trash_offset;
};

#endif

