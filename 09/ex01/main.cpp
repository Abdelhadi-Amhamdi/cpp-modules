/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:47:22 by aamhamdi          #+#    #+#             */
/*   Updated: 2024/01/01 17:30:48 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cout << "invalid args , usage : (./RPN \"data here\")" << std::endl;
        return (1);
    }
    std::string exp = argv[1];
    RPN rpn;
    return (rpn.calc(exp));
}