/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 06:31:45 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 04:06:19 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	Bureaucrat c("Lhaj", 145);
	Bureaucrat d("Valar", 20);
	Form F("The form", 30, 12);
    try {
        c.signForm(F);
    } catch (Form::GradeTooLowException &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
