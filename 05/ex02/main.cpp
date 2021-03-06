/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:10:37 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/24 17:18:13 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	Form * f = new ShrubberyCreationForm("tree");
	Bureaucrat bob("Bob", 150);
	Bureaucrat john("John", 17);

	std::cout << *f << std::endl;
	bob.signForm(*f);
	john.executeForm(*f);
	john.signForm(*f);
	bob.executeForm(*f);
	john.executeForm(*f);

	delete f;

	f = new RobotomyRequestForm("Bob");
	john.signForm(*f);
	john.executeForm(*f);

	delete f;

	f = new PresidentialPardonForm("Bob");
	Bureaucrat zafod_beeblebrox("Zafod Beeblebrox", 5);
	john.signForm(*f);
	zafod_beeblebrox.executeForm(*f);
}
