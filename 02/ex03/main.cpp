/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:50:02 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/28 15:15:59 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point a = Point(Fixed(0), Fixed(0));
	Point b = Point(Fixed(1), Fixed(0));
	Point c = Point(Fixed(0), Fixed(1));

	std::cout << bsp(a, b, c, Point(Fixed(0.3f), Fixed(0.3f))) << std::endl;
	std::cout << bsp(a, b, c, Point(Fixed(0.5f), Fixed(0.5f))) << std::endl;
	std::cout << bsp(a, b, c, Point(Fixed(1), Fixed(1))) << std::endl;
}
