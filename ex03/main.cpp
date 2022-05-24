/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:04:52 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/24 21:10:41 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	testBureaucrat(std::string const &formName)
{
	Intern	someRandomIntern;
	Form	*form;
	Bureaucrat	armel = Bureaucrat("Armel", 1);

	try
	{
		form = someRandomIntern.makeForm(formName, "42Bangkok");
		armel.signForm(*form);
		armel.executeForm(*form);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

int	main(void)
{
	testBureaucrat("shrubbery creation");
	testBureaucrat("robotomy request");
	testBureaucrat("presidential pardon");
	testBureaucrat("free evaluation");
}
