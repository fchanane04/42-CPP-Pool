/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 04:13:27 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/25 12:36:43 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
	void iter(T *array, int len, void (*funct)(T const &))
	{
		for (int i = 0; i < len; i++)
		{
			funct(array[i]);
		}
	}

//***** simple test ******

void multi(int const &a)
{
	std::cout<<"element is :"<<a<<std::endl;
}

int main(void)
{
	int array[5] = {1, 2, 3, 4, 5};
	iter(array, 5, &multi);
}

//***** complex test ******
// class Awesome
// {
// 	public:
// 	Awesome( void ) : _n( 42 ) { return; }
// 	int get( void ) const { return this->_n; }
// 	private:
// 	int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main()
// {
// 	int tab[] = { 0, 1, 2, 3, 4 };
// 	Awesome tab2[5];
// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );
// 	return 0;
// }