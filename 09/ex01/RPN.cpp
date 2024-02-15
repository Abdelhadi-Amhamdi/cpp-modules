/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:38:53 by aamhamdi          #+#    #+#             */
/*   Updated: 2024/01/12 17:43:45 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <sstream>

RPN::RPN(){}

RPN::RPN(const RPN &c){*this = c;}

RPN & RPN::operator=(const RPN &c) {(void)c;return(*this);}

RPN::~RPN(){}


int RPN::add(int val1, int val2) const { return (val1 + val2);}

int RPN::mult(int val1, int val2) const {return (val1 * val2);}

int RPN::dev(int val1, int val2) const {return (val1 / val2);}

int RPN::sub(int val1, int val2) const {return (val1 - val2);}

bool isdegit(std::string &str) {
    size_t i = 0;
    if (str[0] == '-' || str[0] == '+')
        i++;
    for ( ; i < str.size(); i++) {
        if (!std::isdigit(str[i]))
            return (false);
    }
    return (true);
}

bool isoperatio(std::string &str) {
    return (str.size() == 1 && (str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/'));
}

int RPN::calc(std::string &exp) {
    typedef int (RPN::*func)(int, int) const;
    std::string str = "+*/-";

    func methods[4] = {&RPN::add, &RPN::mult, &RPN::dev, &RPN::sub};
    std::stringstream ss(exp);
    std::string item;
    while (ss >> item) {
        if (isoperatio(item)) {
            size_t first, sec, pos;
            pos = str.find(item[0]);
            if (cal.size() < 2) {
                std::cout << "Error\n"; 
                return (1);
            }
            first = cal.top();
            cal.pop();
            sec = cal.top();
            cal.pop();
            if (!first && pos == 2) {
                std::cout << "Error\n";
                return (1);
            }
            cal.push((this->*methods[pos])(sec, first));
        } else if (isdegit(item)) {
            int nb;
            std::stringstream s_nb(item);
            s_nb >> nb;
            if (nb >= 10) {
                std::cout << "Error\n";
                return (1);
            }
            cal.push(nb);
        }else {
            std::cout << "Error\n";
            return (0);
        }
    }
    if (cal.size() != 1) {
        std::cout << "Error\n";
        return (1);
    }
    std::cout << cal.top() << std::endl;
    return (0);
}