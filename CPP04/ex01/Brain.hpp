/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:20:40 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/19 20:29:39 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private :
		std::string ideas[100];
	public :
		Brain(void);
		Brain(Brain const & src);
		Brain & operator=(Brain const &src);
		~Brain(void);
};

#endif
