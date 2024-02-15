/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:28:10 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/12/10 16:20:43 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
    Array<int> a(5);
    Array<int> b(10);
    for(int i = 0; i < a.size(); i++) {
        std::cout << a[i] << std::endl;
    }
    std::cout << "------------------\n";
    for(int i = 0; i < a.size(); i++) {
        a[i] = i;
    }
    b = a;
    for(int i = 0; i < a.size(); i++) {
        std::cout << a[i] << std::endl;
    }
    try {
        b[110] = 1000;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    } 
    std::cout << "------------------\n";
    for(int i = 0; i < b.size(); i++) {
        std::cout << b[i] << std::endl;
    }
    return (0);
}
