/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 01:59:57 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/26 05:32:22 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"span.hpp"

Span::Span(void) : N(0)
{
	//std::cout<<"Default constructor called"<<std::endl;
	return ;
}

Span::Span(unsigned int N) : N(N)
{
	//std::cout<<"Default Parameterized constructor called"<<std::endl;
    return ;
}

Span& Span::operator=(const Span& src)
{
	//std::cout<<"Assignation operator called"<<std::endl;
	this->N = src.N;
	this->array = src.array;
	return (*this);
}

Span::Span(const Span& src)
{
	//std::cout<<"Copy constructor called"<<std::endl;
	*this = src;
	return ;
}

Span::~Span(void)
{
	//std::cout<<"Destructor called"<<std::endl;
    return ;
}

void Span::addNumber(int nbr)
{
	if (array.size() >= N)
		throw std::length_error("Span is full");
	array.push_back(nbr);
}

unsigned int Span::shortestSpan(void)
{
	if (array.size() < 2)
		throw std::length_error("Not enough numbers to find span");
	std::vector<int> tmp;
	tmp = this->array;
	std::sort(tmp.begin(), tmp.end());
	unsigned int limit = UINT_MAX;
	for (unsigned int i = 0; i < tmp.size(); i++)
	{
		if (static_cast<unsigned int>(std::abs(tmp[i + 1] - tmp[i])) < (limit))
			limit = std::abs(tmp[i + 1] - tmp[i]);
	}
	return limit;
}

unsigned int Span::longestSpan(void)
{
	if (array.size() < 2)
		throw std::length_error("Not enough numbers to find span");
	std::vector<int> tmp;
	tmp = this->array;
	std::sort(tmp.begin(), tmp.end());
	return (std::abs(tmp[tmp.size() - 1] - tmp[0]));
}

// template <typename T>
// 	void Span::addRange(T first, T last)
// 	{
// 		if (std::distance(first, last) + array.size() > N)
// 			throw std::length_error("Can't add this range");
// 		array.insert(array.end(), first, last);
// 	}