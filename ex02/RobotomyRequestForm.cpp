/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:18:56 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/24 20:20:26 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Default Class Constructor
RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequest", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequest", 72, 45), _target(target)
{
	std::cout << "RobotomyRequest for " << target << " constructed" << std::endl;
}

// Copy Class Constructor
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src.getName(), src.getMinSign(), src.getMinExec())
{
	*this = src;
	std::cout << "RobotomyRequest Copied" << std::endl;
}

// Class Deconstructor
RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

// Assign Operator Overload
RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	// Make your Assignment here
	_target = rhs._target;
	return (*this);
}

void	RobotomyRequestForm::FormExecute(void) const
{
	std::cout << "*** LOUD DRILLING NOISE ***" << std::endl;
	srand(time(NULL));
	if (rand() % 2)
	{
		std::cout << _target << " has been robotomized" << std::endl;
	}
	else
	{
		std::cout << _target << " robotomize failed" << std::endl;
	}
}
