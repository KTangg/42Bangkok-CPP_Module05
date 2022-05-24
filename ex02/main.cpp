/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:04:52 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/24 20:21:59 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	testExecute(Bureaucrat const &executor, Form &form)
{
	executor.signForm(form);
	executor.executeForm(form);
}

void	testForm(Bureaucrat const &executor)
{
	ShrubberyCreationForm	shForm = ShrubberyCreationForm(executor.getName() + "_home");
	RobotomyRequestForm		rbForm = RobotomyRequestForm(executor.getName() + "_home");
	PresidentialPardonForm	psForm = PresidentialPardonForm(executor.getName());

	std::cout << std::endl;
	testExecute(executor, shForm);
	std::cout << std::endl;
	testExecute(executor, rbForm);
	std::cout << std::endl;
	testExecute(executor, psForm);
}

int	main(void)
{
	Bureaucrat	spoolpra = Bureaucrat("Spoolpra", 125);
	testForm(spoolpra);
	std::cout << "\n" << std::endl;

	Bureaucrat	vlad = Bureaucrat("Vlad", 50);
	testForm(vlad);
	std::cout << "\n" << std::endl;

	Bureaucrat	armel = Bureaucrat("Armel", 1);
	testForm(armel);
	std::cout << "\n" << std::endl;
}
