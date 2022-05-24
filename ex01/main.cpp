/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:04:52 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/24 10:42:02 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

void	testInit(std::string name, int min_sign, int min_exec)
{
	try
	{
		Form	form = Form(name, min_sign, min_exec);
		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	testSign(Bureaucrat &bureaucrat, Form form)
{
	bureaucrat.signForm(form);
	std::cout << form << std::endl;
}

int	main(void)
{
	// Test Form Initialize
	std::cout << "Test Initialize Form" << std::endl;
	testInit("1", 50, 100);
	testInit("1", 0, 100);
	testInit("1", 100, 0);
	testInit("1", 151, 100);
	testInit("1", 100, 151);

	std::cout << "\n" << std::endl;
	Bureaucrat	vlad = Bureaucrat("Vlad", 100);
	Bureaucrat	armel = Bureaucrat("Armel", 1);
	Form	low = Form("General", 100, 150);
	Form	mid = Form("Specific", 50, 100);
	Form	high = Form("Special", 1, 50);

	std::cout << "\n" << std::endl;
	testSign(vlad, low);
	testSign(vlad, mid);
	testSign(vlad, high);
	std::cout << "\n" << std::endl;
	testSign(armel, low);
	testSign(armel, mid);
	testSign(armel, high);
	std::cout << "\n" << std::endl;
}
