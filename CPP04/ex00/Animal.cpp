/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:34:09 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/19 00:18:08 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "AnimalType";
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

Animal & Animal::operator=(Animal const & src)
{
	std::cout << "Animal assignation operator called" << std::endl;
	this->type = src.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
