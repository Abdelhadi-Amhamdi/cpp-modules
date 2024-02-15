/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:31:59 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/12/17 16:51:28 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack();
        MutantStack(const MutantStack &other);
        MutantStack & operator=(const MutantStack &other);
        ~MutantStack();
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin();
        iterator end();
};

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &other) {
    *this = other;
}
template <typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack &other) {
    if (this != &other)
        this->c = other.c;
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return (iterator(this->c.begin()));
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return (iterator(this->c.end()));
}

#endif