/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:37:47 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/20 03:27:44 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
	std::cout<<"DiamondTrap default constructor called"<<std::endl;
	ClapTrap::name = "DiamondTrap_Clap_name";
	this->name = "DiamondTrap";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
	std::cout<<"DiamondTrap constructor called"<<std::endl;
	ClapTrap::name = name + "_Clap_name";
	this->setName(name);
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ScavTrap(src), FragTrap(src)
{
	std::cout<<"DiamondTrap copy constructor called"<<std::endl;
	*this = src;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout<<"DiamondTrap destructor called"<<std::endl;
	return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src)
{
	std::cout<<"DiamondTrap assignation operator called"<<std::endl;
	ScavTrap::operator=(src);
	FragTrap::operator=(src);
	return (*this);
}

void DiamondTrap::setName(std::string name)
{
	this->name = name;
}

std::string DiamondTrap::getName(void)
{
	return (this->name);
}

void DiamondTrap::whoAmI(void)
{
	std::cout<<"name is "<<this->name<<" and ClapTrap name is "<<ClapTrap::name<<std::endl;
	return ;
}