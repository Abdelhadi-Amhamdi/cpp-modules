/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:32:51 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/11/11 17:21:51 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << "this is " << j->getType() << " Animal " << std::endl;
	std::cout << "this is " << i->getType() << " Animal " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	std::cout << "---------------" << std::endl;
	const WrongAnimal* a = new WrongCat();
	a->makeSound();
	const WrongCat b;
	b.makeSound();
	delete a;
	return 0;
}