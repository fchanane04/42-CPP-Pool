/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 22:39:59 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/06 18:42:26 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):weapon(weapon)
{
	this->name = name;
}

std::string HumanA::getName(void)
{
	return (this->name);
}

void	HumanA::attack(void)
{
	std::cout<<this->getName()<<" attacks with their "<<weapon.getType()<<std::endl;
}
