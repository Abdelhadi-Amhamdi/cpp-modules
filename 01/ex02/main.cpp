/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:12:06 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/09/28 18:19:36 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *p_str = &str;
	std::string& r_str = str;

	std::cout << &str << std::endl;
	std::cout << p_str << std::endl;
	std::cout << &r_str << &std::endl;
	
	std::cout << str << std::endl;
	std::cout << *p_str << std::endl;
	std::cout << r_str << &std::endl;
	
	return (0);
}