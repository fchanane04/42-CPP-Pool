/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 07:02:24 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 05:57:27 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form()
{
	std::cout<<"Default constructor called"<<std::endl;
	this->setName("Robotomy");
	this->setSigned(false);
	this->setGradeRE(45);
	this->setGradeRS(72);
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form()
{
	std::cout<<"RobotomyRequestForm constructor called"<<std::endl;
	this->setName("Robotomy");
    this->setSigned(false);
	this->setGradeRE(45);
    this->setGradeRS(72);
	this->target = target;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = src;
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	std::cout<<"Assignment operator called"<<std::endl;
	Form::operator=(src);
	this->setName(src.getName());
	this->setGradeRE(src.getGradeRE());
	this->setGradeRS(src.getGradeRS());
	this->setSigned(src.getIsSigned());
	this->target = src.target;
    return *this;

}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout<<"Destructor RobotomyRequestForm called"<<std::endl;
	return ;
}

void RobotomyRequestForm::makeDrillingNoises(void)
{
	std::cout<<"Robotomy is making some NOIIIIISE"<<std::endl;
	return ;
}

void RobotomyRequestForm::informTarget(void)
{
	int	random;
	srand(time(0));
	random = rand() % 2;
	if (random)
		std::cout<<this->target<<" has been robotomized successfully"<<std::endl;
	else
		std::cout<<"The robotomy has failed"<<std::endl;
	return ;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
        throw Form::NotSignedException();
	if (this->getGradeRE() < executor.getGrade())
	    throw Form::GradeTooLowException();
	std::cout<<executor.getName()<<" executed "<<this->getName()<<std::endl;
}
