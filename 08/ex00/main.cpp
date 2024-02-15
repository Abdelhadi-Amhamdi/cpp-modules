/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:28:05 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/12/17 17:05:16 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main() {
    std::vector<int> a;
    std::list<int> arr;
    size_t N = 10;

    for (size_t i = 0; i < N; i++)
        a.push_back(i);
    for (size_t i = 0; i < N; i++)
        arr.push_back(N - i);
    try {
        std::cout << easydind(a, 0) << std::endl;
    } catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "------------------------------\n";
    try {
        std::cout << easydind(arr, 11) << std::endl;
    } catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}