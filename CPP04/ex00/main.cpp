/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:46:20 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/21 05:26:22 by fchanane         ###   ########.fr       */
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
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << "| |" << std::endl;
	std::cout << i->getType() << "| |" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "----------Now testing the Wrong ones----------" << std::endl;
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	wrong->makeSound();
	wrongCat->makeSound();
	delete meta;
	delete i;
	delete j;
	return 0;
}