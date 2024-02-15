/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:54:08 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/12/05 15:33:02 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>

class ScalarConverter {
    public:
        static void convert(const std::string &val); 
        ScalarConverter(const ScalarConverter &s);
        ScalarConverter & operator=(const ScalarConverter &s);
        ~ScalarConverter();
    private:
        ScalarConverter();
};
int is_char(const std::string &val);
int is_decimal(const std::string &val);

#endif