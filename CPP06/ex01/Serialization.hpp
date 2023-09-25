/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:48:21 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 21:59:16 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include<cstdint>
#include<iostream>

struct Data
{
	int a;
	int	b;
};//this struct should be size 8 at max

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
