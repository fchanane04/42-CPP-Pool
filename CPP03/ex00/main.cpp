/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:23:28 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/18 21:12:30 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ClapTrap1("ClapTrap1");
	ClapTrap	ClapTrap2("ClapTrap2");
	//ClapTrap	ClapTrap3(ClapTrap1);
	ClapTrap	ClapTrap4;

	ClapTrap4 = ClapTrap2 = ClapTrap1;
	// ClapTrap1.attack("ClapTrap2");
	// ClapTrap2.takeDamage(1);
	// ClapTrap2.beRepaired(1);
	// ClapTrap3.attack("ClapTrap4");
	// ClapTrap4.takeDamage(5);
	// ClapTrap4.beRepaired(5);
	// return (0);
}
