/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:14:33 by aamhamdi          #+#    #+#             */
/*   Updated: 2024/01/03 13:31:27 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGER_HPP
#define BITCOINEXCHANGER_HPP
#include <iostream>
#include <sstream>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <map>

class BitcoinExchange {
	public:
		int		init(std::string &filename);
		int		exchange(std::string &filename);
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &b);
		BitcoinExchange & operator=(const BitcoinExchange &b);
		std::string	dateToString(double date) const;
		double	dateToDouble(std::stringstream &fileStream) const;
		bool	is_empty_file(std::ifstream &s);
		bool	isvalidline(std::string &str) const;
		bool	isvalid_data(std::string &str, float &a, long &d) const;
		bool	check_data(std::string &date, std::string &amount, float &a, long &d) const;
	private:
		std::map<long, float> database;
};

#endif