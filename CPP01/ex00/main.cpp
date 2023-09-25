/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:42:55 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/09 21:56:06 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int	main(void)
{
	Zombie *z = newZombie("gojo");
	z->announce();
	delete z;
	randomChump("sukuna");
	randomChump("denji");
}
