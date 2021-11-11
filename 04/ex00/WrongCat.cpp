/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:26:28 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/11 17:28:03 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal() {
	type = "WrongCat";
	std::cout << "It is a WrongCat!" << std::endl;
}

WrongCat::WrongCat(const WrongCat & copy) : WrongAnimal(copy) {
	std::cout << "It is a WrongCat!" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "It was a WrongCatat." << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Meow" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat & rhs) {
	this->WrongAnimal::operator=(rhs);

	return *this;
}
