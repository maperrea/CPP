/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:23:30 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/12 15:11:58 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
	public:

		/* Constructors and destructors */

		WrongAnimal();
		WrongAnimal(std::string const & type);
		WrongAnimal(const WrongAnimal & copy);
		~WrongAnimal();

		/* Member functions */

		void makeSound() const;

		/* Setters end Getters */

		std::string getType() const;

		/* Operator overloads */

		WrongAnimal & operator=(const WrongAnimal & rhs);

	protected:
		
		/* Member variables */

		std::string type;

};

#endif
