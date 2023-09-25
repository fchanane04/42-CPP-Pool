/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 06:06:05 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 06:51:37 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern created" << std::endl;
	this->FormName[0] = "ShrubberyCreationForm";
	this->FormName[1] = "RobotomyRequestForm";
	this->FormName[2] = "PresidentialPardonForm";
	return ;
}

Intern::~Intern()
{
	std::cout << "Intern destructed" << std::endl;
	return ;
}

Form *Intern::makeShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form *Intern::makePresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string formName, std::string target)
{
	Form *form;
	Form * (Intern::*Forms[3])(std::string) = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidential};
	for (size_t i = 0; i < 3; i++)
	{
		if (formName == this->FormName[i])
		{
			form = (this->*Forms[i])(target);
			std::cout<<"Intern creates "<<form->getName()<<std::endl;
			return form;
		}
	}
	throw Intern::InvalidFormName();
	return (NULL);
}