/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 05:39:21 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/15 00:20:54 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &		Fixed::operator=(Fixed const &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPoint = src.getRawBits();
	return (*this);
}

int			Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

void		Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
	return ;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = n << this->fractionalBits;
	return ;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(n * (1 << this->fractionalBits));
	return ;
}

float		Fixed::toFloat(void) const
{
	return ((float)this->fixedPoint / (1 << this->fractionalBits));
}

int			Fixed::toInt(void) const
{
	return (this->fixedPoint >> this->fractionalBits);
}

std::ostream &	operator<<(std::ostream &out, Fixed const & src)
{
	out << src.toFloat();
	return (out);
}

