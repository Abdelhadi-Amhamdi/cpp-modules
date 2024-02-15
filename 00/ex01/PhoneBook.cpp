/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:12:42 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/10/26 12:03:52 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : offset(0), max_size(8) {};

int PhoneBook::check_index(std::string index) {
	int id;
	for (std::string::size_type i = 0; i < index.size(); i++)
	{
		if (!isdigit(index[i]))
		{
			std::cout << "invalid index !" << std::endl;
			return (0);
		}
	}
	id = stoi(index);
	if (!id || id < 0)
		std::cout << "invalid index !" << std::endl;
	return (id);
}

std::string	PhoneBook::read_prompt() {
	std::string buffer;

	std::getline(std::cin, buffer);
	if (std::cin.eof())
	{
		std::cout << "goodbye :)" << std::endl;
		exit (EXIT_SUCCESS);
	}
	return (buffer);
}

std::string	PhoneBook::resize(std::string data) {
	std::string result;

	result = data;
	if (result.size() > 10)
	{
		result.resize(9);
		result += ".";
	}
	return (result);
}

bool	PhoneBook::is_all_space(const std::string str) {
	for (std::string::size_type i = 0; i < str.length(); i++)
	{
		if (!std::isspace(str[i]))
			return (false);
	}
	return (true);
}

std::string	PhoneBook::get_data(std::string prompt_msg) {
	std::string data;
	while (data.empty() || is_all_space(data))
	{
		std::cout << prompt_msg << std::endl;
		data = read_prompt();
	}
	return (data);
}


void	PhoneBook::new_contact() {
	PhoneBook::data[offset % max_size].set_first_name(get_data("plase entre first name:"));
	PhoneBook::data[offset % max_size].set_last_name(get_data("plase entre last name:"));
	PhoneBook::data[offset % max_size].set_nick_name(get_data("plase entre nickname:"));
	PhoneBook::data[offset % max_size].set_phone(get_data("plase entre phone number:"));
	PhoneBook::data[offset % max_size].set_secret(get_data("plase entre a secret:"));
	PhoneBook::data[offset % max_size].set_index(offset + 1);
	offset++;
}

void	PhoneBook::index_contacts()
{
	std::string index;

	if (!offset)
	{
		std::cout << "Empty, no contacts available !" << std::endl;
		return ;
	}
	std::cout << _HEAD;
	for (int i = 0; i < max_size; i++)
	{
		if (i == PhoneBook::offset)
			break ;
		std::cout << "|";
		std::cout << std::setw(10) << PhoneBook::data[i].get_index();
		std::cout << "|";
		std::cout << std::setw(10) << resize(PhoneBook::data[i].get_first_name());
		std::cout << "|";
		std::cout << std::setw(10) << resize(PhoneBook::data[i].get_last_name());
		std::cout << "|";
		std::cout << std::setw(10) << resize(PhoneBook::data[i].get_nick_name());
		std::cout << "|" << std::endl;
		std::cout << "---------------------------------------------\n";
	}
	std::cout << "please entre index for contact to display" << std::endl;
	index = read_prompt();
	contact(index);
}

void	PhoneBook::contact(std::string index)
{
	int id;
	int found;

	id = check_index(index);
	if (!id || id < 0)
		return ;
	found = 0;
	for (int i = 0; i < max_size; i++)
	{
		if (i == PhoneBook::offset)
			break ;
		if (PhoneBook::data[i].get_index() == id)
		{
			std::cout << "index        : " << PhoneBook::data[i].get_index() << std::endl;
			std::cout << "first name   : " << PhoneBook::data[i].get_first_name() << std::endl;
			std::cout << "last name    : " << PhoneBook::data[i].get_last_name() << std::endl;
			std::cout << "phone number : " << PhoneBook::data[i].get_phone() << std::endl;
			std::cout << "nickname     : " << PhoneBook::data[i].get_nick_name() << std::endl;
			std::cout << "dark secret  : " << PhoneBook::data[i].get_secret() << std::endl;
			found = 1;
		}
	}
	if (!found)
		std::cout << "index not founded!" << std::endl;
}

PhoneBook::~PhoneBook() {}