/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:38:13 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/25 18:25:54 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << &str << "\n"
		<< stringPTR << "\n"
		<< &stringREF << "\n"
		<< str << "\n"
		<< *stringPTR << "\n"
		<< stringREF << std::endl;
}
