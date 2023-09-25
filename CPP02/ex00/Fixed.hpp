/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 02:34:24 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/13 00:36:55 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private :
		int					fixedPoint;
		static const int 	fractionalBits = 8;
	public :
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed& operator=(Fixed const &src);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		~Fixed(void);
};

#endif
