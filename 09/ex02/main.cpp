/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 10:17:14 by aamhamdi          #+#    #+#             */
/*   Updated: 2024/01/12 22:09:57 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
    if (argc == 1) {
        std::cout << "invalid args , usage (./PmergeMe \"data\")\n"; 
        return (1);
    }
    if (argc == 2) {
        std::cout << "Error, at least give 2 numbers to sort\n";
        return (1);
    }
    PmergeMe a;
    try {
        a.sort_vector(argv, argc);
        a.sort_list(argv, argc);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}