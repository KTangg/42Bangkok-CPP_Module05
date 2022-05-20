/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:05:29 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/20 12:15:50 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Default Class Constructor
Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat Default constructed" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if (_grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}

	std::cout << "Bureaucrat " << _name << " constructed" << std::endl;
}

// Copy Class Constructor
Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName())
{
	*this = src;
	if (_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if (_grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	std::cout << "Bureaucrat " << _name << " copied" << std::endl;
}

// Class Deconstructor
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat " << _name << " deconstucted" << std::endl;
}

// Assign Operator Overload
Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	// Make your Assignment here
	_grade = rhs.getGrade();
	return (*this);
}

// Outstream Overload
std::ostream	&operator<<(std::ostream &out, Bureaucrat const &rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (out);
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	_grade--;
	if (_grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
}

void	Bureaucrat::decrementGrade(void)
{
	_grade++;
	if (_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}
