/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:54:09 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/10/26 12:03:42 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string	data;
	std::string	index;
	PhoneBook	ph_book;

	while (true)
	{
		std::cout << "Commands : (ADD, SEARCH, EXIT)" << std::endl;
		data = PhoneBook::read_prompt();
		if (!data.compare(_EXIT))
		{
			std::cout << "goodbye :)" << std::endl;
			break ;
		}
		else if (!data.compare(_ADD))
			ph_book.new_contact();
		else if (!data.compare(_SEARCH))
			ph_book.index_contacts();
		else
			std::cout << "Invalid command , do you mean (ADD, SEARCH, EXIT) ?" << std::endl;
	}
	return (0);
}
