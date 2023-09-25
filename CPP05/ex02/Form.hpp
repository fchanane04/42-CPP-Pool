/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:37:23 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 04:18:21 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private :
		std::string name;
		bool is_signed;
		int gradeRS;
		int gradeRE;
	public :
		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw() {
                return "the grade passed is too high";
            }
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw() {
                return "the grade passed is too low";
            }
		};
		class NotSignedException : public std::exception
		{
			public :
				virtual const char* what() const throw() {
					return "the form is not signed";
				}
		};
		Form(void);
		Form(const std::string &name, int gradeRS, int gradeRE);
		Form(Form const & src);
		Form & operator=(Form const & src);
		virtual ~Form(void);
		std::string getName() const;
		bool getIsSigned() const;
        int getGradeRS() const;
		int getGradeRE() const;
		void setName(std::string name);
		void setSigned(bool isSigned);
		void setGradeRE(int gradeRE);
		void setGradeRS(int gradeRS);
		void beSigned(Bureaucrat const & B);
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &	operator<<(std::ostream &out, Form const & src);

#endif
