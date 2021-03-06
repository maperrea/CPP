/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:18:02 by maperrea          #+#    #+#             */
/*   Updated: 2021/12/01 16:40:12 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	Animal * meta = new Animal();
	Animal j = Dog();
	Animal * i = new Cat();
	WrongAnimal * k = new WrongCat();
	std::cout << j.getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << k->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	j.makeSound();
	k->makeSound();
	meta->makeSound();
}
