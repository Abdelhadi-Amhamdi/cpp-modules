/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:53:05 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/10/26 11:56:56 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

# define _EXIT "EXIT"
# define _ADD "ADD"
# define _SEARCH "SEARCH"
# define _HEAD "\
--------------------------------------------- \n\
|     index|first name| last name|  nickname| \n\
--------------------------------------------- \n"

class PhoneBook
{
	Contact		data[8];
	int			offset;
	int			max_size;

	public:
	PhoneBook();
	void		new_contact();
	void		index_contacts();
	void		contact(std::string index);
	static int	check_index(std::string index);
	static bool	is_all_space(std::string str);
	static std::string	read_prompt();
	static std::string	resize(std::string data);
	static std::string	get_data(std::string prompt_msg);
	~PhoneBook();
};

#endif