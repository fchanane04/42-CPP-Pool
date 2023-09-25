/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 01:35:17 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/21 06:06:17 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->type = "Dog";
	this->DogBrain = NULL;
	std::cout << "Dog default constructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	if (this->DogBrain != NULL)
		delete this->DogBrain;
	return ;
}

Dog & Dog::operator=(Dog const & src)
{
	std::cout << "Dog assignation operator called" << std::endl;
	Animal::operator=(src);
	this->DogBrain = new Brain(*src.DogBrain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog go BARK!!" << std::endl;
	return ;
}
