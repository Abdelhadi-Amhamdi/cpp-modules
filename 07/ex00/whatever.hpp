/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:06:01 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/12/09 12:06:34 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T>
void swap(T &a, T &b) {T temp = a;a = b;b = temp;}

template <typename T>
T  min(T &a, T &b) {return ((a < b) ? a : b);}

template <typename T>
T  max(T &a, T &b) {return ((a > b) ? a : b);}

#endif