/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:18:54 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/24 20:19:06 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		// Standard Constructor
		PresidentialPardonForm(std::string const &target);
		// Copy Class Constructor
		PresidentialPardonForm(PresidentialPardonForm const &src);
		// Class Deconstructor
		virtual	~PresidentialPardonForm(void);

		// Assign operator overload
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);

		// Function member part
		virtual void	FormExecute(void) const;

	private:
		// Default Class Constructor
		PresidentialPardonForm(void);
		std::string	_target;
};

#endif // **************************************************** __PRESIDENTIALPARDONFORM_HPP__ //
