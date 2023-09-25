/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 07:02:56 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 05:57:18 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form()
{
	std::cout<<"Default constructor called"<<std::endl;
	this->setName("Shrub");
	this->setSigned(false);
	this->setGradeRE(5);
	this->setGradeRS(25);
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form()
{
	std::cout<<"PresidentialPardonForm constructor called"<<std::endl;
	this->setName("Presidential");
    this->setSigned(false);
	this->setGradeRE(5);
    this->setGradeRS(25);
	this->target = target;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = src;
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	std::cout<<"Assignment operator called"<<std::endl;
	Form::operator=(src);
	this->setName("Presidential");
	this->setGradeRE(src.getGradeRE());
	this->setGradeRS(src.getGradeRS());
	this->setSigned(src.getIsSigned());
	this->target = src.target;
    return *this;

}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout<<"Destructor PresidentialPardonForm called"<<std::endl;
	return ;
}

void PresidentialPardonForm::informTarget(void)
{
	std::cout<<this->target<<" has been pardoned by Zaphod Beeblebrox"<<std::endl;
	return ;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
        throw Form::NotSignedException();
	if (this->getGradeRE() < executor.getGrade())
	    throw Form::GradeTooLowException();
	std::cout<<executor.getName()<<" executed "<<this->getName()<<std::endl;
}