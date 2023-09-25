/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 06:32:02 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 05:58:22 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout<<"Default constructor called"<<std::endl;
	this->name = "Bureaucrat";
	return ;
}

Bureaucrat::Bureaucrat(std::string const &name, size_t grade) : name(name)
{
	std::cout<<"Constrcutor called"<<std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = src;
	return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	std::cout<<"Copy assignment constructor called"<<std::endl;
	this->name = src.name;
	this->grade = src.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout<<"Destructor Bureaucrat called"<<std::endl;
	return ;
}

std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

size_t Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade(void)
{
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (this->grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

void Bureaucrat::signForm(Form & F)
{
	std::cout<<this->getName();
	if (F.getIsSigned() == true)
		std::cout<<" signed "<<F.getName()<<std::endl;
	else
	{
		try
		{
			F.beSigned(*this);
			std::cout<<" signed "<<F.getName()<<std::endl;
		}
		catch(Form::GradeTooLowException &Exp)
		{
			std::cout<<" couldn't sign "<<F.getName()<<" because"<<Exp.what()<<std::endl;
		}
	}
	return ;
}

void Bureaucrat::executeForm(Form const & form)
{
	try{

		form.execute(*this);
	}
	catch(Form::NotSignedException & e)
	{
		std::cout<<"ERROR : "<<e.what()<<std::endl;
	}
}

std::ostream &	operator<<(std::ostream &out, Bureaucrat const & src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (out);
}