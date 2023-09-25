/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 01:38:59 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/21 06:12:26 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main(void)
// {
// 	Animal *animal = new Animal();
// 	Animal *dog = new Dog();
// 	animal->makeSound();
// 	dog->makeSound();
// 	std::cout << animal->getType() << std::endl;
// 	delete animal;
// 	delete dog;
// 	return (0);
// }

int main()
{
	Dog *D = new Dog();
	Cat *C = new Cat();
	Animal *a = new Dog();
	//Animal *A = new Animal();
	D->makeSound();
	C->makeSound();
	//A->makeSound();
	delete D;
	delete C;
}
