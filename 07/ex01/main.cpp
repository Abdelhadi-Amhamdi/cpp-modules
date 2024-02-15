/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:08:04 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/12/10 15:54:59 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void print(T a) {
    std::cout << a << std::endl;
}

int main() {
    int int_arr[3] = {1, 2, 3};
    iter(int_arr, 3, print<int>);
    char char_arr[3] = {'a', 'b', 'c'};
    iter(char_arr, 3, print<char>);
    std::string string_arr[3] = {"hello", "hey", "hi"};
    iter(string_arr, 3, print<std::string>);
    return (0);
}
