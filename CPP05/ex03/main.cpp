/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 06:31:45 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 06:59:22 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	ShrubberyCreationForm Shrubbey("home");
	RobotomyRequestForm Robotomy("home");
	PresidentialPardonForm Presidential("home");
	Shrubbey.createFile();
	Bureaucrat B("Lhaj", 149);
	B.executeForm(Shrubbey);
	Robotomy.makeDrillingNoises();
	Robotomy.informTarget();
    Presidential.informTarget();
	Intern* intern = new Intern();
	try{

	intern->makeForm("RobotomyRequestForm", "home");
	}
	catch(Intern::InvalidFormName & e)
	{
		std::cout<<e.what()<<std::endl;
		delete intern;//check it
	}
	delete intern;
}
