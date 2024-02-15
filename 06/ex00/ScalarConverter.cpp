/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:54:25 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/12/05 15:32:54 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(const ScalarConverter &s) {(void)s;}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &s) {(void)s;return *this;}

int is_char(const std::string &val) {
    return (val.length() == 1 && std::isprint(val[0]) && !std::isdigit(val[0]));
}

int is_decimal(const std::string &val) {
    size_t index = 0, dot = 0, f = 0;
    if (val[0] == '+' || val[0] == '-')
        index++;
    for (; index < val.length(); index++) {
        if (val[index] == '.' && index && !dot && val[index + 1])
            dot++;
        else if (val[index] == 'f' && index && !f)
            f++;
        else if (!std::isdigit(val[index]))
            return (0);
    }
    return (!(!dot && f));
}

void ScalarConverter::convert(const std::string &val) {
    if (val.empty())
        return ;
    if (is_char(val)) {
        std::cout << "char   : " << static_cast<char>(val[0]) << std::endl;
        std::cout << "int    : " << static_cast<int>(val[0]) << std::endl;
        std::cout << "float  : " << static_cast<float>(val[0]) << ".0f" << std::endl; 
        std::cout << "double : " << static_cast<double>(val[0]) << ".0" << std::endl;
    } else if (is_decimal(val)) {
        std::string newstr  = val;
        std::string::size_type pos = val.find("f");
        if (pos != std::string::npos)
            newstr = val.substr(0, pos);
        std::stringstream data_stream(newstr); 
        double value;
        if (data_stream >> value) {
            std::cout << "char   : ";
            if (std::isprint(value))
                std::cout << static_cast<char>(value) << std::endl;
            else
                std::cout << "non displayable" << std::endl;
            std::cout << "int    : " << static_cast<int>(value) << std::endl;
            std::cout << "float  : " << static_cast<float>(value) << (val.find(".") == std::string::npos ? ".0f" : "f") << std::endl; 
            std::cout << "double : " << value << (val.find(".") == std::string::npos ? ".0" : "") << std::endl;
        }
    } else {
        if (val == "nan") {
            std::cout << "char   : " << "imposible" << std::endl;
            std::cout << "int    : " << "imposible" << std::endl;
            std::cout << "float  : " << "nanf" << std::endl; 
            std::cout << "double : " << "nan" << std::endl;
        } else if (val == "-inff" || val == "-inf") {
            std::cout << "char   : " << "imposible" << std::endl;
            std::cout << "int    : " << "imposible" << std::endl;
            std::cout << "float  : " << "-inff" << std::endl; 
            std::cout << "double : " << "-inf" << std::endl;
        } else if (val == "+inff" || val == "inff" || val == "inf") {
            std::cout << "char   : " << "imposible" << std::endl;
            std::cout << "int    : " << "imposible" << std::endl;
            std::cout << "float  : " << "inff" << std::endl; 
            std::cout << "double : " << "inf" << std::endl;
        } else {
            std::cout << "char   : " << "imposible" << std::endl;
            std::cout << "int    : " << "imposible" << std::endl;
            std::cout << "float  : " << "imposible" << std::endl; 
            std::cout << "double : " << "imposible" << std::endl;
        }
    }
}

ScalarConverter::~ScalarConverter() {}

 