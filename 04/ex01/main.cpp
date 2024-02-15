/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:32:51 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/12 17:55:21 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	int N = 4;
	Animal *arr[N];

	for (int i = 0; i < N / 2; i++)
		arr[i] = new Dog();
		
	for (int i = N / 2; i < N; i++)
		arr[i] = new Cat();
		
	for (int i = 0; i < N; i++)
		delete arr[i];
	return 0;
}