/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:29:39 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/12/20 14:54:52 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>

class Span {
    public:
        Span(unsigned int n);
        void        addNumber(int item);
        size_t      shortestSpan();
        size_t      longestSpan();
        void        span_insert(std::vector<int>::iterator beg, std::vector<int>::iterator end);
        ~Span();
    private:
        std::vector<int> arr;
        size_t offset; 
        size_t max_size;
};

#endif