/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 01:38:59 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/21 06:02:05 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// Cat *a = new Cat();
	// Cat b;
	// *a = b;
	// delete a;
	Animal *Zoo[20];
	for (size_t i = 0; i < 10; i++)
	{
		Zoo[i] = new Dog();
	}
	for (size_t i = 10; i < 20; i++)
	{
		Zoo[i] = new Cat();
	}
	for (size_t i = 0; i < 20; i++)
	{
		std::cout<<Zoo[i]->getType()<<std::endl;
		delete Zoo[i];
	}
	system("leaks Brain");
	return 0;
}
