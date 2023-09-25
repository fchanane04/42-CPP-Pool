/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 06:32:12 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/22 07:32:59 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private :
		std::string name;
		size_t grade;
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
		Bureaucrat(void);
		Bureaucrat(const std::string &name, size_t grade);
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat & operator=(Bureaucrat const & src);
		~Bureaucrat(void);
		std::string getName(void) const;
		size_t getGrade(void) const;
		void incrementGrade(void);
		void decrementGrade(void);
};

std::ostream &	operator<<(std::ostream &out, Bureaucrat const & src);
#endif