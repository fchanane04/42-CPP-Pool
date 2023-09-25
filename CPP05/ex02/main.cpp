/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 06:31:45 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 05:59:41 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
}
