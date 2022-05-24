/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:38:21 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/24 21:00:09 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

# define SHRUBBERY 1347138126
# define ROBOTOMY 1363944148
# define PRESIDENT 3863649870

class Intern
{
	public:
		// Default Class Constructor
		Intern(void);
		// Copy Class Constructor
		Intern(Intern const &src);
		// Class Deconstructor
		virtual	~Intern(void);

		// Assign operator overload
		Intern	&operator=(Intern const &rhs);

		// Function member part
		unsigned int	hashForm(std::string const &formName) const;
		Form	*makeForm(std::string const &formName, std::string const &target) const;

		// Exception Class
		class UnknowFormException : public std::exception
		{
			public:
				virtual const char	*what(void) const throw()
				{
					return ("Intern doesn't recognise given form");
				}
		};
	private:
};

#endif // **************************************************** __INTERN_HPP__ //
