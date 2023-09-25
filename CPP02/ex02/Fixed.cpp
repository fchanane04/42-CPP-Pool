/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 01:36:17 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/14 23:40:17 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : fixedPoint(0)
{
	//std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &		Fixed::operator=(Fixed const &src)
{
	//std::cout << "Copy assignment operator called" << std::endl;
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
	//std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = n << this->fractionalBits;
	return ;
}

Fixed::Fixed(const float n)
{
	//std::cout << "Float constructor called" << std::endl;
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

std::ostream&	operator<<(std::ostream &out, Fixed const &src)
{
	out << src.toFloat();
	return (out);
}

Fixed Fixed::operator+(Fixed other)
{
	Fixed result;

	result.setRawBits(this->getRawBits() + other.getRawBits());
	return (result);
}

Fixed Fixed::operator-(Fixed other)
{
	Fixed result;
	
	result.setRawBits(this->getRawBits() - other.getRawBits());
	return (result);
}

Fixed Fixed::operator*(Fixed other)
{
	Fixed result;
	
	result.setRawBits((this->getRawBits() * other.getRawBits()) >> this->fractionalBits);
	return (result);
}

Fixed Fixed::operator/(Fixed other)
{
	Fixed result;
	
	result.setRawBits((this->getRawBits() << this->fractionalBits) / other.getRawBits());
	return (result);
}

int	Fixed::operator>(Fixed other)
{
	if (this->getRawBits() > other.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator<(Fixed other)
{
	if (this->getRawBits() < other.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator>=(Fixed other)
{
	if (this->getRawBits() >= other.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator<=(Fixed other)
{
	if (this->getRawBits() <= other.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator==(Fixed other)
{
	if (this->getRawBits() == other.getRawBits())
		return (1);
	return (0);
}

int	Fixed::operator!=(Fixed other)
{
	if (this->getRawBits() != other.getRawBits())
		return (1);
	return (0);
}

Fixed& Fixed::operator++()
{
	this->fixedPoint++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->fixedPoint;
	return (tmp);
}

Fixed& Fixed::operator--()
{
	this->fixedPoint--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->fixedPoint;
	return (tmp);
}

Fixed& Fixed::min(Fixed  &a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed  &a, Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return ((Fixed&)a);
	return ((Fixed&)b);
}

Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return ((Fixed&)a);
	return ((Fixed&)b);
}