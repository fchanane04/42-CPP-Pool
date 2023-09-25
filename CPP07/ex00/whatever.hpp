/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 03:08:03 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/25 11:35:22 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

class Awesome;

template <typename T>
	void swap(T& a, T& b);

template <typename T>
	T min(T& a, T& b);

template <typename T>
	T max(T& a, T& b);

#endif