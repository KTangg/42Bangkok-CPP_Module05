/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:19:01 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/24 20:20:30 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Default Class Constructor
ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreation", 145, 137)
{
}

// Standard Constructor
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("ShrubberyCreation", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreation for " << _target << " constructed" << std::endl;
}

// Copy Class Constructor
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src.getName(), src.getMinSign(), src.getMinExec())
{
	*this = src;
	std::cout << "ShrubberyCreation Copied" << std::endl;
}

// Class Deconstructor
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

// Assign Operator Overload
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	// Make your Assignment here
	_target = rhs._target;
	return (*this);
}

void	ShrubberyCreationForm::FormExecute(void) const
{
	std::string		file_name = _target + "_shrubbery";
	std::ofstream	ofs(file_name.c_str());
	if (!ofs)
	{
		std::cerr << "Fail to open " << file_name << std::endl;
		return ;
	}
	_createShrubbery(ofs);
}

void	ShrubberyCreationForm::_createShrubbery(std::ofstream &ofs) const
{
	ofs << "                      ___" << std::endl;
	ofs << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
	ofs << "             ,-'          __,,-- \\" << std::endl;
	ofs << "           ,'    __,--\"\"\"\"dF      )" << std::endl;
	ofs << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
	ofs << "        ,'       _Hb ___dF\"-._,-'" << std::endl;
	ofs << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
	ofs << "     (     ,-'                  `." << std::endl;
	ofs << "      `._,'     _   _             ;" << std::endl;
	ofs << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
	ofs << "       \\    ,'\"Hb.-'HH`-.dHF\"" << std::endl;
	ofs << "        `--'   \"Hb  HH  dF\"" << std::endl;
	ofs << "                \"Hb HH dF" << std::endl;
	ofs << "                 \"HbHHdF" << std::endl;
	ofs << "                  |HHHF" << std::endl;
	ofs << "                  |HHH|" << std::endl;
	ofs << "                  |HHH|" << std::endl;
	ofs << "                  |HHH|" << std::endl;
	ofs << "                  |HHH|" << std::endl;
	ofs << "                  dHHHb" << std::endl;
	ofs << "                .dFd|bHb.               o" << std::endl;
	ofs << "      o       .dHFdH|HbTHb.          o /" << std::endl;
	ofs << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
	ofs << "##########################################" << std::endl;
}
