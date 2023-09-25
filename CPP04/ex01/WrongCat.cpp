/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 01:38:03 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/21 05:48:28 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->type = "WrongCat";
	this->WrongCatBrain = new Brain();
	std::cout << "WrongCat default constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
	delete this->WrongCatBrain;
	return ;
}

WrongCat & WrongCat::operator=(WrongCat const & src)
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	WrongAnimal::operator=(src);
	this->WrongCatBrain = new Brain(*src.WrongCatBrain);
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat go MEOW!!" << std::endl;
	return ;
}
