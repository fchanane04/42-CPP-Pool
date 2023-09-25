/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 19:31:44 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/01 18:19:38 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include<iostream>
#include<string>

class contact
{
	private :
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string	phoneNumber;
		std::string darkSecret;
	public :
		void	set_firstName();
		void	set_lastName();
		void	set_nickName();
		void	set_phoneNumber();
		void	set_darkSecret();
		std::string	get_firstName();
		std::string	get_lastName();
		std::string	get_nickName();
		std::string get_phoneNumber();
		std::string	get_darkSecret();
		bool	valid_firstName(std::string firstName);
		bool	valid_lastName(std::string lastName);
		bool	valid_nickName(std::string nickName);
		bool	valid_phoneNumber(std::string phoneNumber);
		bool	valid_darkSecret(std::string darkSecret);
};

#endif
