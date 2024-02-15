/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:38:40 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/12/27 22:08:42 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN {
    public:
        RPN();
        RPN(const RPN &c);
        RPN & operator=(const RPN &c);
        ~RPN();
        int add(int val1, int val2) const;
        int dev(int val1, int val2) const;
        int sub(int val1, int val2) const;
        int mult(int val1, int val2) const;
        int calc(std::string &exp);
    private:
        std::stack<int> cal;
};

#endif