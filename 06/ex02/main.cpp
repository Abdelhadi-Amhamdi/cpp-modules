/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:56:37 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/12/04 14:59:09 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>
#include <iostream>

Base *generate(void) {
    std::srand(time(NULL));
    size_t nb = std::rand() % 3;
    Base *arr[3] = {new (std::nothrow) A, new (std::nothrow) B, new (std::nothrow) C};
    if (!arr[0] || !arr[1] || !arr[2]) {
        for (size_t i = 0; i < 3; i++) {
            if (arr[i])
                delete arr[i];
        }
        return (NULL);
    }
    for (size_t i = 0; i < 3; i++) {
        if (i != nb)
            delete arr[i];
    }
    return (arr[nb]);
}

void identify(Base* p) {
    std::cout << ((dynamic_cast<A*>(p)) ? "A" : ((dynamic_cast<B*>(p)) ? "B" : "C"))  << std::endl;
}
void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A\n";
        return ;
    }
    catch(...) {}
    try {
       (void)dynamic_cast<B&>(p);
        std::cout << "B\n";
        return ;
    } catch (...) {}
    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C\n";
        return ;
    } catch (...) {}
}

int main() {
    Base *objptr = generate();
    if (!objptr)
        return (0);
    Base &objref = (*objptr);
    identify(objptr);
    identify(objref);
    delete objptr;
    return (0);
}