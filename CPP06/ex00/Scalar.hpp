/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:30:50 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 02:42:45 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <regex>



bool isInt(std::string input);
bool isFloat(std::string input);
bool isDouble(std::string input);
void printTheInprintable(int intValue, float floatValue, double doubleValue);
void printValues(char charValue, int intValue, float floatValue, double doubleValue);
void handleChar(std::string input);
void handleInt(std::string input);
void handleFloat(std::string input);
void handleDouble(std::string input);





#endif
