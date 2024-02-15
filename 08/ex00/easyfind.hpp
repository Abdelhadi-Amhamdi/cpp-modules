/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:28:12 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/12/17 17:04:07 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>

template <typename T>
int easydind(T &item, int n) {
    typename T::iterator it = std::find(item.begin(), item.end(), n);
    if (it == item.end())
        throw std::exception();
    return (*it);
}

#endif