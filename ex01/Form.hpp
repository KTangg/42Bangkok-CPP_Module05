/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:55:40 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/24 09:58:40 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

class Form;
# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
	public:
		// Standard Constructor
		Form(std::string name, int min_sign, int min_exec);
		// Copy Class Constructor
		Form(Form const &src);
		// Class Deconstructor
		virtual	~Form(void);

		// Assign operator overload
		Form	&operator=(Form const &rhs);

		// Getter part
		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getMinSign(void) const;
		int			getMinExec(void) const;

		// Function member
		void	beSigned(Bureaucrat const &bureaucrat);

		// Exception class
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what(void) const throw()
				{
					return ("Form: Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what(void) const throw()
				{
					return ("Form: Grade is too low");
				}
		};

	private:
		// Default Class Constructor
		Form(void);
		std::string const	_name;
		bool				_signed;
		int const			_min_sign;
		int const			_min_exec;
};

// outstream overload
std::ostream	&operator<<(std::ostream &out, Form const &rhs);

#endif // **************************************************** __FORM_HPP__ //
