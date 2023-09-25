/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 19:41:00 by fchanane          #+#    #+#             */
/*   Updated: 2022/12/30 22:25:26 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include"contact.hpp"
#include<sstream>
#include<iomanip>
#include<cctype>

class phoneBook
{
	public :
		phoneBook();
		void	choice();
		bool	add_contact();
		void	display();
		void	printer(void);
		void	index_incr(void);
		void	count_incr(void);
		int		get_index(void);
	private :
		contact array[8];
		int index;
		int	count;
};

#endif
