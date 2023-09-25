/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:42:38 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/10 01:03:01 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->weapon = NULL;
	this->name = name;
}

void	HumanB::setName(std::string name)
{
	this->name = name;
}

std::string HumanB::getName(void)
{
	return (this->name);
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	weapon = &newWeapon;
}

const Weapon* HumanB::getWeapon(void)
{
	return this->weapon;
}

void	HumanB::attack(void)
{
	if (weapon == NULL)
		std::cout <<this->getName()<< " is unarmed" << std::endl;
	else
		std::cout<<this->getName()<<" attacks with their "<<(*weapon).getType()<<std::endl;
}