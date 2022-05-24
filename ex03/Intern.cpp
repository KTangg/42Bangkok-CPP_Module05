/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:58:08 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/24 21:10:58 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Default Class Constructor
Intern::Intern(void)
{
}

// Copy Class Constructor
Intern::Intern(Intern const &src)
{
	*this = src;
}

// Class Deconstructor
Intern::~Intern(void)
{
}

// Assign Operator Overload
Intern	&Intern::operator=(Intern const &rhs)
{
	// Make your Assignment here
	(void)rhs;
	return (*this);
}

unsigned int	Intern::hashForm(std::string const &formName) const
{
	unsigned int	hash = 0;
	for (size_t i = 0; i < formName.length(); i++)
	{
		hash = (hash << 5) + formName[i];
	}
	return (hash);
}

Form	*Intern::makeForm(std::string const &formName, std::string const &target) const
{
	switch (hashForm(formName))
	{
		case (SHRUBBERY) :
			return (new ShrubberyCreationForm(target));
		case (ROBOTOMY) :
			return (new RobotomyRequestForm(target));
		case (PRESIDENT) :
			return (new PresidentialPardonForm(target));
		default :
			throw Intern::UnknowFormException();
	}
}
