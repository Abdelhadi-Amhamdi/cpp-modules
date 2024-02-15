/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:16:10 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/11 16:58:31 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &c);
		AMateria & operator=(const AMateria &c);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
		std::string const & getType() const;
		virtual ~AMateria();
	protected:
		std::string type;
};


#endif

