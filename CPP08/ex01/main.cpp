/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 01:59:43 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/26 05:33:20 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{

//************ PRIMMARY TEST ******************
	Span sp = Span(5);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		//sp.addNumber(11);
	}
	catch (std::length_error &e)
	{
		std::cout<<"ERROR!! "<<e.what()<<std::endl;
		return 1;
	}
	//std::cout<<"fin"<<std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

//************ RANGE TEST ******************

	// std::vector<int> numbers;
	// numbers.push_back(14);
	// numbers.push_back(2);
	// numbers.push_back(3);
	// numbers.push_back(4);
	// numbers.push_back(5);
	// Span s(20);
	// try
	// {
	// 	s.addRange(numbers.begin(), numbers.end());
	// }
	// catch (std::length_error &e)
	// {
	// 	std::cout<<"ERROR! "<<e.what()<<std::endl;
	// }
	// return 0;
}