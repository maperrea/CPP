/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maperrea <maperrea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:45:02 by maperrea          #+#    #+#             */
/*   Updated: 2021/11/24 15:46:22 by maperrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <stdexcept>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:

		class GradeTooLowException : public std::exception {
			public:
				virtual char const * what() const throw();
		};

		class GradeTooHighException : public std::exception {
			public:
				virtual char const * what() const throw();
		};

		class FormNotSignedException : public std::exception {
			public:
				virtual char const * what() const throw();
		};

		/* Constructors and destructors */

		Form();
		Form(std::string const & name, int sign_grade, int exec_grade, std::string const & target)
			throw (GradeTooLowException, GradeTooHighException);
		Form(const Form & copy);
		virtual ~Form() = 0;

		/* Member functions */

		void beSigned(Bureaucrat const & b) throw (GradeTooLowException);
		virtual void execute(Bureaucrat const & b) const
			throw (GradeTooLowException, FormNotSignedException);

		/* Setters end Getters */

		std::string getName() const;
		int getSignGrade() const;
		int getExecGrade() const;
		bool isSigned() const;
		std::string getTarget() const;

		void setTarget(std::string const & target);

		/* Operator overloads */

		Form & operator=(const Form & rhs);

	private:
		
		/* Member variables */

		std::string const name;
		std::string target;
		int const sign_grade;
		int const exec_grade;
		bool is_signed;

};

std::ostream & operator<<(std::ostream & os, Form const & f);

#endif
