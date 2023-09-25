/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 22:30:44 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/06 18:42:36 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include"Weapon.hpp"

class HumanA
{
	private :
		std::string name;
		Weapon& weapon;
	public :
		HumanA(std::string name, Weapon& weapon);
		std::string getName(void);
		void	attack(void);
};

#endif
