/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 22:54:28 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/08 20:36:43 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private :

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public :
	
		Harl();
		~Harl();

		void complain(std::string level);
		int index(std::string level);
};

#endif
