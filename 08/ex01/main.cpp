/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:31:19 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/12/20 14:55:59 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    int N = 5;
    std::vector<int> b;
    b.push_back(8);
    b.push_back(5);
    b.push_back(0);
    b.push_back(2);
    Span a(N);
    try {
        a.addNumber(55);
        a.span_insert(b.begin(), b.end());
        std::cout << a.shortestSpan() << std::endl;
        std::cout << a.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    } 
    return (0);
}