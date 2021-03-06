/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:29:32 by maperrea          #+#    #+#             */
/*   Updated: 2021/12/08 11:10:10 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
	public:

		/* Constructors and destructors */

		Brain();
		Brain(const Brain & copy);
		~Brain();

		/* Member functions */


		/* Setters end Getters */


		/* Operator overloads */

		Brain & operator=(const Brain & rhs);

	private:
		
		/* Member variables */

		std::string ideas[100];

};

#endif
