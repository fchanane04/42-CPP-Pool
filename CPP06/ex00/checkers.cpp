/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:33:20 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 02:33:51 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Scalar.hpp"

bool isInt(std::string input)
{
	for (size_t i = 0; i < input.length(); i++)
	{
		if (input[i] == '-' && i == 0)
			i++;
		if (!isdigit(input[i]))
			return false;
	}
	return true;
}

bool isFloat(std::string input)
{
    std::regex floatRegex("-?[0-9]*\\.?[0-9]+([eE][-+]?[0-9]+)?");
    return std::regex_match(input, floatRegex);
}

bool isDouble(std::string input) 
{
    std::regex doubleRegex("-?[0-9]*\\.?[0-9]+([eE][-+]?[0-9]+)?");
    return std::regex_match(input, doubleRegex);
}
