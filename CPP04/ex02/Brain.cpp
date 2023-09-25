/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:30:48 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/21 06:03:12 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout<<"Brain default constructor called"<<std::endl;
	return ;
}

Brain::Brain(Brain const & src)
{
	std::cout<<"Brain copy constructor called"<< std::endl;
	*this = src;
	return ;
}

Brain::~Brain(void)
{
	std::cout<<"Brain destructor called"<<std::endl;
	return ;
}

Brain & Brain::operator=(Brain const & src)
{
	std::cout<<"Brain assignation operator called"<<std::endl;
	return (*this);
}