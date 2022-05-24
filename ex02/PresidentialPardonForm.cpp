/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:18:51 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/24 20:20:18 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Default Class Constructor
PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardon", 25, 5)
{
	std::cout << "Default PresidentialPardon constructed" << std::endl;
}

// Standard Constructor
PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("PresidentialPardon", 25, 5), _target(target)
{
	std::cout << "PresidentialPardon for " << target << " constructed" << std::endl;
}

// Copy Class Constructor
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src.getName(), src.getMinSign(), src.getMinExec())
{
	*this = src;
	std::cout << "PresidentialPardon Copied" << std::endl;
}

// Class Deconstructor
PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

// Assign Operator Overload
PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	// Make your Assignment here
	_target = rhs._target;
	return (*this);
}

void	PresidentialPardonForm::FormExecute(void) const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
