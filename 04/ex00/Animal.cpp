/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:24:44 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/11 17:19:43 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("unknown creature") {
	std::cout << "New Animal Created" << std::endl;
}

Animal::Animal(const Animal & copy) : type(copy.getType()) {
	std::cout << "Animal Copied" << std::endl;
}

Animal::~Animal() {
	std::cout << "An Animal has died" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Weird sounds echo around you" << std::endl;
}

std::string Animal::getType() const {
	return type;
}

Animal & Animal::operator=(const Animal & rhs) {
	type = rhs.type;

	return *this;
}
