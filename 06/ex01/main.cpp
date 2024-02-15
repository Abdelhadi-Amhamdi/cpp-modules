/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:42:23 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/23 15:47:07 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data *a = new Data;
    a->x = 42;
    std::cout << "original ptr    : " << a << std::endl;

    uintptr_t b = Serializer::serialize(a);
    std::cout << "unitptr         : " << b << std::endl;

    Data *c = Serializer::deserialize(b);
    std::cout << "after serialize : " << c << std::endl;
    std::cout << c->x << std::endl;
    return (0);
}