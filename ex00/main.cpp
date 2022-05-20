/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:05:24 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/20 12:23:57 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

void	testInit(std::string name, int grade)
{
	try
	{
		Bureaucrat x = Bureaucrat(name, grade);
		std::cout << x << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	testIncrement(Bureaucrat &x)
{
	std::cout << "Before: " << x << std::endl;
	try
	{
		x.incrementGrade();
		std::cout << "After: " << x << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	testDecrement(Bureaucrat &x)
{
	std::cout << "Before: " << x << std::endl;
	try
	{
		x.decrementGrade();
		std::cout << "After: " << x << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main(void)
{
	// Test for Valid Grade Initialize
	testInit("Armel", -2147483647);
	testInit("Armel", 0);
	testInit("Armel", 151);
	testInit("Armel", 1);
	testInit("Armel", 150);
	std::cout << std::endl;

	// Test for Increment
	Bureaucrat armel = Bureaucrat("Armel", 3);
	testIncrement(armel);
	testIncrement(armel);
	testIncrement(armel);

	// Test for Decrement
	Bureaucrat vlad = Bureaucrat("Vlad", 148);
	testDecrement(vlad);
	testDecrement(vlad);
	testDecrement(vlad);
}
