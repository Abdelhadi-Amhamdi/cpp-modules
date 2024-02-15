/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:28:03 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/12/10 16:20:14 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array {
    public:
        Array();
        Array(const Array &arr);
        Array(unsigned int n);
        Array & operator=(const Array &arr);
        T & operator[](int index);
        int size() const ;
        ~Array();
    private:
        int length;
        T   *array;
};

template<typename T>
Array<T>::Array() {
    this->length = 0;
    this->array = NULL;
}

template<typename T>
Array<T>::Array(unsigned int n) {
    this->length = n;
    this->array = new T[n];
    for (size_t i = 0; i < n; i++) {
        this->array[i] = 0;
    }
}

template<typename T>
Array<T>::Array(const Array &arr) {
    this->length = arr.length;
    this->array = new T[this->length];
    for (int i = 0; i < this->length ; i++) {
        this->array[i] = arr.array[i];
    }
}


template<typename T>
T & Array<T>::operator[](int index) {
    if (index >= this->length || index < 0)
        throw std::exception();
    return (this->array[index]);
}

template<typename T>
Array<T> & Array<T>::operator=(const Array &arr) {
    if (this != &arr) {
        this->length = arr.length;
        if (arr.array) {
            delete [] this->array;
            this->array = new T[arr.length];
            for (int i = 0; i < this->length; i++) {
                this->array[i] = arr.array[i];
            }    
        } else
            this->array = NULL;
    }
    return (*this);
}

template<typename T>
int Array<T>::size() const {
    return (this->length);
}

template<typename T>
Array<T>::~Array() {
    if (this->array)
        delete [] this->array;
}

#endif