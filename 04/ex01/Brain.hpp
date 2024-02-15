/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:22:07 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/09 12:47:42 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
#define Brain_HPP
#include <iostream>


class Brain {
	public:
		Brain();
		Brain(const Brain &c);
		Brain & operator=(const Brain &c);
		~Brain();
	private:
	std::string ideas[100];
};

#endif
