/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:19:03 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/24 20:19:04 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		// Standard Constructor
		ShrubberyCreationForm(std::string const &target);
		// Copy Class Constructor
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		// Class Deconstructor
		virtual	~ShrubberyCreationForm(void);

		// Assign operator overload
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);

		// Function member part
		virtual void	FormExecute(void) const;

	private:
		// Default Class Constructor
		ShrubberyCreationForm(void);
		std::string	_target;
		void	_createShrubbery(std::ofstream &ofs) const;
};

#endif // **************************************************** __SHRUBBERYCREATIONFORM_HPP__ //
