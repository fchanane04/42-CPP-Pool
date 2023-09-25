/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 02:00:12 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/26 05:32:17 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include<vector>
#include<iostream>
#include<algorithm>

class Span
{
	private :
		unsigned int N;
		std::vector<int> array;
	public :
		Span(void);
		Span(unsigned int N);
		Span(Span const & src);
		~Span(void);
        Span & operator=(Span const & src);
		void addNumber(int nbr);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
		template <typename T>
			void addRange(T first, T last)
			{
				if (std::distance(first, last) + array.size() > N)
					throw std::length_error("Can't add this range");
				array.insert(array.end(), first, last);
				// for (unsigned int i = 0; i < array.size(); i++) {
    			// 	std::cout << array[i] << std::endl;
				// }
			}
};



#endif
