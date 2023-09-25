/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 01:07:57 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/18 01:08:13 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap fragTrap("FragTrap");
	fragTrap.attack("enemy");
	fragTrap.takeDamage(10);
	fragTrap.beRepaired(10);
	fragTrap.highFivesGuys();
	return (0);
}
