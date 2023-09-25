/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:33:55 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/19 00:18:03 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(Animal const & src);
		Animal & operator=(Animal const & src);
		virtual ~Animal(void);
		std::string	getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
