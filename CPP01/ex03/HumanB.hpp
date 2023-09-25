/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:28:59 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/10 01:02:35 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include"Weapon.hpp"

class HumanB
{
	private :
		std::string name;
		Weapon* weapon;
	public :
		HumanB(std::string name);
		std::string getName(void);
		void		setName(std::string name);
		const Weapon* getWeapon(void);
		void		setWeapon(Weapon& newWeapon);
		void		attack(void);
};

#endif