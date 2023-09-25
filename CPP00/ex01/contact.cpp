/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 19:38:22 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/01 18:37:16 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"contact.hpp"

bool	contact::valid_firstName(std::string firstName)
{
	if (firstName.length() == 0)
	{
		std::cerr<<"ERROR: empty contact!"<<std::endl;
		return 0;
	}
	for(int i = 0; firstName[i]; i++)
	{
		if (!isalpha(firstName[i]))
		{
			std::cerr<<"not a valid name"<<std::endl;
			return 0;
		}
	}
	return (1);
}

bool	contact::valid_lastName(std::string lastName)
{
	if (lastName.length() == 0)
	{
		std::cerr<<"ERROR: empty contact!"<<std::endl;
		return 0;
	}
	for(int i = 0; lastName[i]; i++)
	{
		if (!isalpha(lastName[i]))
		{
			std::cerr<<"not a valid name"<<std::endl;
			return 0;
		}
	}
	return (1);
}

bool	contact::valid_nickName(std::string nickName)
{
	if (nickName.length() == 0)
	{
		std::cerr<<"ERROR: empty contact!"<<std::endl;
		return 0;
	}
	return (1);
}

bool	contact::valid_phoneNumber(std::string phoneNumber)
{
	if (phoneNumber.length() == 0)
	{
		std::cerr<<"ERROR: empty contact!"<<std::endl;
		return 0;
	}
	for(int i = 0; phoneNumber[i]; i++)
	{
		if (!isnumber(phoneNumber[i]))
		{
			std::cerr<<"not a valid phonenumber"<<std::endl;
			return 0;
		}
	}
	return (1);
}

bool	contact::valid_darkSecret(std::string darkSecret)
{
	if (darkSecret.length() == 0)
	{
		std::cerr<<"ERROR: empty contact!"<<std::endl;
		return 0;
	}
	return (1);
}

void	contact::set_firstName(void)
{
	std::string input;
	std::cout << "Enter firstname : "<< std::endl;
	getline(std::cin , input);
	this->firstName = input;
	while (!valid_firstName(input))
	{
		std::cout << "Enter firstname : "<< std::endl;
		getline(std::cin , input);
		this->firstName = input;
	}
}

void	contact::set_lastName(void)
{
	std::string input;
	std::cout << "Enter lastname : "<< std::endl;
	getline(std::cin, input);
	this->lastName = input;
	while (!valid_lastName(input))
	{
		std::cout << "Enter lastname : "<< std::endl;
		getline(std::cin , input);
		this->lastName = input;
	}
}

void	contact::set_nickName(void)
{
	std::string input;
	std::cout << "Enter nickname : "<< std::endl;
	getline(std::cin, input);
	this->nickName = input;
	while (!valid_nickName(input))
	{
		std::cout << "Enter nickname : "<< std::endl;
		getline(std::cin , input);
		this->nickName = input;
	}
}

void	contact::set_phoneNumber(void)
{
	std::string	input;
	std::cout<< "Enter phonenumber : "<< std::endl;
	getline(std::cin, input);
	this->phoneNumber = input;
	while (!valid_phoneNumber(input))
	{
		std::cout << "Enter phonenumber : "<< std::endl;
		getline(std::cin , input);
		this->phoneNumber = input;
	}
}

void	contact::set_darkSecret(void)
{
	std::string input;
	std::cout<< "Enter a dark secret :"<< std::endl;
	getline(std::cin, input);
	this->darkSecret = input;
	while (!valid_darkSecret(input))
	{
		std::cout << "Enter dark secret : "<< std::endl;
		getline(std::cin , input);
		this->darkSecret = input;
	}

}

std::string	contact::get_firstName(void)
{
	return this->firstName;
}

std::string	contact::get_lastName(void)
{
	return this->lastName;
}

std::string	contact::get_nickName(void)
{
	return this->nickName;
}

std::string contact::get_phoneNumber(void)
{
	return this->phoneNumber;
}

std::string contact::get_darkSecret(void)
{
	return this->darkSecret;
}
