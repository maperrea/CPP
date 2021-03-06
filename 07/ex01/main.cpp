/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:58:51 by maperrea          #+#    #+#             */
/*   Updated: 2022/01/28 11:00:12 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template<typename T>
void print(T & elem) {
	std::cout << elem << std::endl;
}

int main() {
	int a[5] = {0, 1, 2, 3, 4};
	std::string s[3] = {"abc", "def", "ghi"};

	iter(a, 5, &print);
	iter(s, 3, &print);
}
