/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 02:51:00 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/13 01:32:39 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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
		Fixed(const int n);
		Fixed(const float n);
		float toFloat(void) const;
		int toInt(void) const;
		~Fixed(void);
};

std::ostream &	operator<<(std::ostream &out, Fixed const & src);

#endif
