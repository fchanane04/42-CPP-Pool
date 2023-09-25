/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 01:35:46 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/14 23:39:03 by fchanane         ###   ########.fr       */
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
		Fixed operator+(Fixed other);
		Fixed operator-(Fixed other);
		Fixed operator*(Fixed other);
		Fixed operator/(Fixed other);
		int   operator>(Fixed other);
		int   operator<(Fixed other);
		int   operator>=(Fixed other);
		int   operator<=(Fixed other);
		int   operator==(Fixed other);
		int   operator!=(Fixed other);
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		static Fixed& min(Fixed &a, Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);

		static Fixed& min(Fixed const &a, Fixed const &b);
		static Fixed& max(Fixed const &a, Fixed const &b);
};

std::ostream &	operator<<(std::ostream &out, Fixed const & src);

#endif
