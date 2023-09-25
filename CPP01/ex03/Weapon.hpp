/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:50:46 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/06 15:08:40 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include<iostream>

class Weapon
{
	private :
		std::string type;
	public :
		Weapon(std::string type);
		const std::string& getType(void);
		void  setType(std::string type);
};

#endif
