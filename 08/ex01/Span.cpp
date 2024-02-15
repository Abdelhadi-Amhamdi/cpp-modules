/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:30:30 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/12/21 15:24:04 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

size_t absolute(int nb) {
    if (nb < 0)
        return (nb * -1);
    return(nb);
}

Span::Span(unsigned int n) : offset(0), max_size(n) {}

void Span::addNumber(int nb) {
    if (this->offset == this->max_size)
        throw std::exception();
    this->arr.push_back(nb);
    this->offset++;
}

size_t Span::shortestSpan() {
    if (this->offset < 2)
        throw std::exception();
    if (!std::is_sorted(this->arr.begin(), this->arr.end()))
        std::sort(this->arr.begin(), this->arr.end());
    std::vector<int>::iterator it = this->arr.begin();
    size_t shortest = absolute(*(it + 1) - *it);
    ++it;
    ++it;
    for (; it != this->arr.end(); it++) {
        if (absolute(*it - *(it - 1)) < shortest)
            shortest = absolute(*it - *(it - 1));
    }
    return (shortest);
}

size_t Span::longestSpan() {
    if (this->offset < 2)
        throw std::exception();
    if (!std::is_sorted(this->arr.begin(), this->arr.end()))
        std::sort(this->arr.begin(), this->arr.end());
    return (*std::max_element(this->arr.begin(), this->arr.end()) - *std::min_element(this->arr.begin(), this->arr.end()));
}

void Span::span_insert(std::vector<int>::iterator beg, std::vector<int>::iterator end) {
    if (std::distance(beg, end) + this->arr.size() > this->max_size)
        throw std::out_of_range("out of range");
    this->arr.insert(arr.end(), beg, end);
    this->offset += std::distance(beg, end);
}

Span::~Span() {}
