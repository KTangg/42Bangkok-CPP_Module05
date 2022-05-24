/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:18:58 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/24 20:19:05 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

# include <iostream>
# include <ctime>
# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		// Standard Constructor
		RobotomyRequestForm(std::string const &target);
		// Copy Class Constructor
		RobotomyRequestForm(RobotomyRequestForm const &src);
		// Class Deconstructor
		virtual	~RobotomyRequestForm(void);

		// Assign operator overload
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);

		// Function member part
		virtual void	FormExecute(void) const;

	private:
		// Default Class Constructor
		RobotomyRequestForm(void);
		std::string	_target;
};


#endif // **************************************************** __ROBOTOMYREQUESTFORM_HPP__ //
