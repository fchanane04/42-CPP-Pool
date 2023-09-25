/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:34:16 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 02:34:45 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Scalar.hpp"

void printTheInprintable(int intValue, float floatValue, double doubleValue)
{
	std::cout<<"int: "<<intValue<<std::endl;
	std::cout<<"float: "<<floatValue<<std::endl;
	std::cout<<"double: "<<doubleValue<<std::endl;
	return ;
}

void printValues(char charValue, int intValue, float floatValue, double doubleValue)
{
	std::cout<<"char: "<<charValue<<std::endl;
	std::cout<<"int: "<<intValue<<std::endl;
	std::cout<<"float: "<<floatValue<<std::endl;
	std::cout<<"double: "<<doubleValue<<std::endl;
	return ;
}
