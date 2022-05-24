/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:05:26 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/24 09:55:09 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

class Bureaucrat;
# include <iostream>
# include "Form.hpp"

class Bureaucrat
{
	public:
		// Standard Constructor
		Bureaucrat(std::string name, int grade);
		// Copy Class Constructor
		Bureaucrat(Bureaucrat const &src);
		// Class Deconstructor
		virtual	~Bureaucrat(void);

		// Assign operator overload
		Bureaucrat	&operator=(Bureaucrat const &rhs);

		// Exception Class
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what(void) const throw()
				{
					return ("Grade is too high. Highest grade is 1");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what(void) const throw()
				{
					return ("Grade is too low. Lowest grade is 150");
				}
		};

		// Getter Part
		std::string	getName(void) const;
		int			getGrade(void) const;

		// Member Functions
		void	incrementGrade(void);
		void	decrementGrade(void);
		void	signForm(Form &form);

	private:
		std::string const	_name;
		int					_grade;

		// Default Class Constructor
		Bureaucrat(void);
};

// outstream overload
std::ostream	&operator<<(std::ostream &out, Bureaucrat const &rhs);

#endif // **************************************************** __BUREAUCRAT_HPP__ //
