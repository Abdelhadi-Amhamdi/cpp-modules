/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:07:40 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/11 11:32:27 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MateriaSource_HPP
#define MateriaSource_HPP
#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &c);
		MateriaSource & operator=(const MateriaSource &c);
		AMateria* createMateria(std::string const & type);
		void learnMateria(AMateria* a);
		~MateriaSource();
	protected:
		AMateria *skills[4];
		int offset;
};

#endif

