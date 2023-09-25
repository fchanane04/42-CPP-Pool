/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:29:54 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/20 00:07:23 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("ClapTrap"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & src)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints < 1 || this->hitPoints < 1)
	{
		std::cout<<"ClapTrap "<<this->name<<" can't attack"<<std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
	return ;
}

void 	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->energyPoints < 1 || this->hitPoints < 1)
	{
		std::cout<<"ClapTrap "<<this->name<<" is already dead"<<std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	this->hitPoints -= amount;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
	return ;
}

void 	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints < 1 || this->hitPoints < 1)
	{
		std::cout<<"ClapTrap "<<this->name<<" can't be repaired"<<std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " points!" << std::endl;
	this->hitPoints += amount;
	return ;
}

