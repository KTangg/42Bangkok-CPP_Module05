/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:55:39 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/24 20:20:10 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Default Class Constructor
Form::Form(void) : _name("Default"), _signed(false), _min_sign(1), _min_exec(150)
{
	std::cout << "Default constructed Form" << std::endl;
}

Form::Form(std::string name, int min_sign, int min_exec) : _name(name), _signed(false), _min_sign(min_sign), _min_exec(min_exec)
{
	if (_min_sign < 1 || _min_exec < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (_min_sign > 150 || _min_exec > 150)
	{
		throw Form::GradeTooLowException();
	}
}

// Copy Class Constructor
Form::Form(Form const &src) : _name(src.getName()), _signed(src.getSigned()), _min_sign(src.getMinSign()), _min_exec(src.getMinExec())
{
	std::cout << "Copied Form" << std::endl;
}

// Class Deconstructor
Form::~Form(void)
{
}

// Assign Operator Overload
Form	&Form::operator=(Form const &rhs)
{
	// Make your Assignment here
	_signed = rhs.getSigned();
	return (*this);
}

// Outstream Overload
std::ostream	&operator<<(std::ostream &out, Form const &rhs)
{
	out << rhs.getName() << " Form: ";
	out << std::boolalpha << "status[" << rhs.getSigned() << "] minSignGrade[" << rhs.getMinSign() << "] minExecGrade[" << rhs.getMinExec() << "]";
	return (out);
}

// Getter Part
std::string	Form::getName(void) const
{
	return (_name);
}

bool	Form::getSigned(void) const
{
	return (_signed);
}

int	Form::getMinSign(void) const
{
	return (_min_sign);
}

int	Form::getMinExec(void) const
{
	return (_min_exec);
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _min_sign)
	{
		throw Form::GradeTooLowException();
	}
	_signed = true;
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (!_signed)
	{
		throw Form::UnsignedFormException();
	}
	else if (executor.getGrade() > _min_exec)
	{
		throw Form::GradeTooLowException();
	}
	FormExecute();
}
