/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:42:57 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/12/27 19:43:26 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
    std::string datafile = "data.csv";
    if (argc == 1) {
        std::cout << "Error : invalid args, usage (./btc inputFileName)\n";
        return (1);
    }
    std::string inputFileName = argv[1];
    BitcoinExchange exchanger;
    if (exchanger.init(datafile))
        return (1);
    return (exchanger.exchange(inputFileName));
}