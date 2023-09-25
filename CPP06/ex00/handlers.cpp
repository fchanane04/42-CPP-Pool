/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:29:51 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 02:44:06 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

char charValue; 
int intValue;
float floatValue;
double doubleValue;

void handleChar(std::string input)
{
	int i = 1;
	if (input.length() == 1)
		i = 0;
	charValue = input[i];
	intValue = static_cast<int>(charValue);
	floatValue = static_cast<float>(intValue);
	doubleValue = static_cast<double>(intValue);
	if (isprint(input[i]))
	{
		printValues(charValue, intValue, floatValue, doubleValue);
	}
	else
		std::cout<<"char: Non displayable"<<std::endl;
		printTheInprintable(intValue, floatValue, doubleValue);
}

void handleInt(std::string input)
{
	int value = std::stoi(input);
	charValue = static_cast<char>(value);
	intValue = static_cast<int>(value);
	floatValue = static_cast<float>(value);
	doubleValue = static_cast<double>(value);
	printValues(charValue, intValue, floatValue, doubleValue);
}

void handleFloat(std::string input)
{
	float value = std::atof(input.c_str());
	charValue = static_cast<char>(value);
	intValue = static_cast<int>(value);
	floatValue = static_cast<float>(value);
	doubleValue = static_cast<double>(value);
	printValues(charValue, intValue, floatValue, doubleValue);
}

void handleDouble(std::string input)
{
	double value = std::stod(input);
	charValue = static_cast<char>(value);
	intValue = static_cast<int>(value);
	floatValue = static_cast<float>(value);
	doubleValue = static_cast<double>(value);
	printValues(charValue, intValue, floatValue, doubleValue);
}
