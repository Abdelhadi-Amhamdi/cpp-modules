/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:26:21 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/10/21 13:41:40 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::get_first_name() {
	return (first_name);
}

std::string Contact::get_last_name() {
	return (last_name);
}

std::string Contact::get_nick_name() {
	return (nick_name);
}

std::string Contact::get_phone() {
	return (phone);
}

std::string Contact::get_secret() {
	return (secret);
}

int Contact::get_index() {
	return (index);
}

void Contact::set_first_name(std::string value) {
	first_name = value;
}

void Contact::set_last_name(std::string value) {
	last_name = value;
}

void Contact::set_nick_name(std::string value) {
	nick_name = value;
}

void Contact::set_phone(std::string value) {
	phone = value;
}
void Contact::set_secret(std::string value) {
	secret = value;
}
void Contact::set_index(int value) {
	index = value;
}
