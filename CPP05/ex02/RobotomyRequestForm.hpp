/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 07:02:33 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 04:45:13 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

class RobotomyRequestForm : public Form
{
	private :
		std::string target;
	public :
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm & operator=(RobotomyRequestForm const & src);
		~RobotomyRequestForm(void);
		void makeDrillingNoises(void);
		void informTarget(void);
		void execute(Bureaucrat const & executor) const;
};

#endif

