/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 07:01:48 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 06:13:43 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form()
{
	std::cout<<"Default constructor called"<<std::endl;
	this->setName("ShrubberyCreationForm");
	this->setSigned(false);
	this->setGradeRE(137);
	this->setGradeRS(145);
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form()
{
	std::cout<<"ShrubberyCreationForm constructor called"<<std::endl;
	this->setName("ShrubberyCreationForm");
    this->setSigned(false);
	this->setGradeRE(137);
    this->setGradeRS(145);
	this->target = target;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = src;
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
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

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout<<"Destructor ShrubberyCreationForm called"<<std::endl;
	return ;
}

void ShrubberyCreationForm::createFile(void)
{
	std::ofstream file;
	file.open(this->target + "_shrubbery");
	file <<"                     ; ; ;"<<std::endl;
	file <<"                   ;        ;  ;     ;;    ;"<<std::endl;
	file <<"                ;                 ;         ;  ;"<<std::endl;
	file<<"                                ;"<<std::endl;
	file<<"                               ;                ;;"<<std::endl;
	file<<"               ;          ;            ;              ;"<<std::endl;
	file<<"               ;            ';,        ;               ;"<<std::endl;
	file<<"               ;              'b      *"<<std::endl;
	file<<"                ;              '$    ;;                ;;"<<std::endl;
	file<<"               ;    ;           $:   ;:               ;"<<std::endl;
	file<<"             ;;      ;  ;;      *;  @):        ;   ; ;"<<std::endl;
	file<<"                          ;     :@,@):   ,;**:'   ;"<<std::endl;
	file<<"              ;      ;,         :@@*: ;;**'      ;   ;"<<std::endl;
	file<<"                       ';o;    ;:(@';@*''  ;"<<std::endl;
	file<<"               ;  ;       'bq,;;:,@@*'   ,*"<<std::endl;
	file<<"                          ,p$q8,:@)'  ;p*'      ;"<<std::endl;
	file<<"                   ;     '  ; '@@Pp@@*'    ;  ;"<<std::endl;
	file<<"                    ;  ; ;;    Y7'.'     ;  ;"<<std::endl;
	file<<"                              :@):."<<std::endl;
	file<<"                             .:@:'."<<std::endl;
	file<<"                           .::(@:. "<<std::endl;
	file.close();
	return ;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
        throw Form::NotSignedException();
	if (this->getGradeRE() < executor.getGrade())
	    throw Form::GradeTooLowException();
	std::cout<<executor.getName()<<" executed "<<this->getName()<<std::endl;
}