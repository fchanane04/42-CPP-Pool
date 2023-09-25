/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 01:36:03 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/21 06:05:09 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->type = "Cat";
	this->CatBrain = NULL;
	std::cout << "Cat default constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	if (this->CatBrain != NULL)
		delete this->CatBrain;
	return ;
}

Cat & Cat::operator=(Cat const & src)
{
	std::cout << "Cat assignation operator called" << std::endl;
	Animal::operator=(src);
	this->CatBrain = new Brain(*src.CatBrain);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat go MEOW!!" << std::endl;
	return ;
}
