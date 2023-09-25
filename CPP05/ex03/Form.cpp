/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:37:36 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/23 08:42:15 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void)
{
	std::cout<<"Default constructor called"<<std::endl;
	this->name = "Form";
	this->is_signed = false;
	return ;
}

Form::Form(const std::string &name, int gradeRS, int gradeRE)
{
	std::cout<<"Form constructor called"<<std::endl;
	this->name = name;
    this->is_signed = false;
	if (gradeRS < 1 || gradeRE < 1)
		throw Form::GradeTooHighException();
	if (gradeRS > 150 || gradeRE > 150)
		throw Form::GradeTooLowException();
	this->gradeRE = gradeRE;
	this->gradeRS = gradeRS;
    return ;
}

Form::Form(Form const & src)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = src;
	return ;
}

Form & Form::operator=(Form const & src)
{
	std::cout<<"copy assignment operator called"<<std::endl;
	this->name = src.name;
	this->is_signed = src.is_signed;
	this->gradeRE = src.gradeRE;
	this->gradeRS = src.gradeRS;
    return *this;
}

Form::~Form(void)
{
	std::cout<<"Destructor called"<<std::endl;
    return ;
}

std::string Form::getName() const
{
	return this->name;
}

bool Form::getIsSigned() const
{
    return this->is_signed;
}

int Form::getGradeRE() const
{
    return this->gradeRE;
}

int Form::getGradeRS() const
{
	return this->gradeRS;
}

void Form::beSigned(Bureaucrat const & B)
{
	if (B.getGrade() > this->getGradeRS())
		throw Form::GradeTooLowException();
	this->is_signed = true;
}

void Form::setName(std::string name)
{
	this->name = name;
}

void Form::setGradeRE(int gradeRE)
{
	this->gradeRE = gradeRE;
}

void Form::setGradeRS(int gradeRS)
{
	this->gradeRS = gradeRS;
}

void Form::setSigned(bool isSigned)
{
	this->is_signed = isSigned;
}

std::ostream &	operator<<(std::ostream &out, Form const & src)
{
	out<<"name : "<<src.getName()<<std::endl;
	out<<"status signed : "<<src.getIsSigned()<<std::endl;
	out<<"gradeRE : "<<src.getGradeRE()<<std::endl;
	out<<"gradeRS : "<<src.getGradeRS()<<std::endl;
	return (out);
}

void Form::execute(Bureaucrat const & executor) const
{
	if (!this->is_signed)
        throw Form::NotSignedException();
	if (this->getGradeRE() < executor.getGrade())
	    throw Form::GradeTooLowException();
	std::cout<<executor.getName()<<" executed "<<this->name<<std::endl;
}
