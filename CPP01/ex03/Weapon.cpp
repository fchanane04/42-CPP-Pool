/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:57:12 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/06 15:09:08 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

const std::string& Weapon::getType(void)
{
	return (this->type);
}

void  Weapon::setType(std::string type)
{
	this->type = type;
}
