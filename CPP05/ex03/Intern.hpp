/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 06:06:24 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 06:48:46 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private :
		std::string FormName[3];
		Form *makeShrubbery(std::string target);
		Form *makeRobotomy(std::string target);
		Form *makePresidential(std::string target);
	public :
		class InvalidFormName : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return "Invalid form name";
				}
		};
		Intern(void);
		~Intern();
		Form *makeForm(std::string formName, std::string target);
};

#endif
