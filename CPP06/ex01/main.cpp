/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 03:25:09 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 22:00:09 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serialization.hpp"

int main(void)
{
	Data *d;
	d->a = 12;
	d->b = 14;
	Data *f;
	uintptr_t raw = serialize(d);
	std::cout<<raw<<std::endl;
	f = deserialize(raw);
	std::cout<<f->a<<std::endl;
	std::cout<<f->b<<std::endl;
    return (0);
}
