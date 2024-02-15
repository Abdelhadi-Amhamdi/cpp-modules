/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:33:36 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/12/04 16:29:45 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <iostream>

typedef struct s_Data {
	char	a;
	int		x;
}	Data;

class Serializer {
	public:
		static uintptr_t serialize(Data *ptr);
		static Data* deserialize(uintptr_t raw);
		Serializer(const Serializer &s);
		Serializer & operator=(const Serializer &s);
		~Serializer();
	private:
		Serializer();
};

#endif