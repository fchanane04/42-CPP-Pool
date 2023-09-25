/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:37:19 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/03 13:51:38 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>

class Zombie
{
	private :
		std::string name;
	public :
		Zombie();
		void announce(void);
		std::string getName(void);
		void	setName(std::string name);
		~Zombie();
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif
