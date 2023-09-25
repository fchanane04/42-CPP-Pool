/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:46:45 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/09 21:57:06 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout<<"Zombie is created"<<std::endl;
}

Zombie::~Zombie(void)
{
	std::cout<<this->getName()<<" zombie is destroyed"<<std::endl;
}	

void	Zombie::setName(std::string name)
{
	this->name = name;
}

std::string Zombie::getName(void)
{
	return (this->name);
}

void	Zombie::announce(void)
{
	std::cout<<this->getName()<<" : BraiiiiiiinnnzzzZ..."<<std::endl;
}
