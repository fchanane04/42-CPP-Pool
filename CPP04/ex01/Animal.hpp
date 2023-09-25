/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 01:33:58 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/19 01:34:31 by fchanane         ###   ########.fr       */
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
