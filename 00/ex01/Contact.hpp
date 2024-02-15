/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:25:04 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/10/26 11:25:57 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone;
	std::string secret;
	int index;
	
	public:
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nick_name();
	std::string get_phone();
	std::string get_secret();
	int get_index();
	void set_first_name(std::string arg_fname);
	void set_last_name(std::string arg_lname);
	void set_nick_name(std::string arg_nname);
	void set_phone(std::string arg_phone);
	void set_secret(std::string arg_srcret);
	void set_index(int arg_index);
};

#endif