/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 04:34:53 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/25 10:21:50 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#  define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
	private :
		T *data;
		unsigned int sizeT;
	public :
		Array(void) : sizeT(0), data(nullptr) {};
		Array(unsigned int n) : sizeT(n)
		{
			data = new T[sizeT];
        };
		Array(const Array<T>& src) : sizeT(src.sizeT)
		{
			data = new T[sizeT];
			for (unsigned int i = 0; i < sizeT; i++)
				data[i] = src.data[i];
		};
		Array<T>& operator=(const Array<T>& src)
		{
			if (this == &src)
                return *this;
			delete[] data;
			sizeT = src.sizeT;
			data = new T[sizeT];
			for (unsigned int i = 0; i < sizeT; i++)
				data[i] = src.data[i];
			return *this;
		};
		~Array(void)
		{
			delete[] data;
			data = nullptr;
		};
		unsigned int size() const { return sizeT; };
		T& operator[](unsigned int n)
    	{
    	    if (n >= sizeT)
    	        throw std::out_of_range("Index out of bounds");
    	    return data[n];
    	};
		const T& operator[](unsigned int n) const
    	{
    	    if (n >= sizeT)
    	        throw std::out_of_range("Index out of bounds");
    	    return data[n];
    	};
};

#endif
