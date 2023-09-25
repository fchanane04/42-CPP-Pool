/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 06:31:45 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 06:59:00 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	Bureaucrat c("Lhaj", 145);
	std::cout<<c<<std::endl;
    // try {
    //     Bureaucrat b("Bob", 151);
    // } catch (Bureaucrat::GradeTooLowException &e) {
    //     std::cout << "Error: " << e.what() << std::endl;
    // }
	// catch (Bureaucrat::GradeTooHighException &e) 
	// {
	// 	std::cout << "Error: " << e.what() << std::endl;
	// }
    return 0;
}
