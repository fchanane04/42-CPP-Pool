/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 19:43:21 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/02 23:30:14 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"phonebook.hpp"

phoneBook::phoneBook(void)
{
	this->index = 0;
	this->count = 0;
}

int		phoneBook::get_index(void)
{
	return (this->index);
}

void	phoneBook::index_incr(void)
{
	if (get_index() > 6)
		this->index = 0;
	else
		this->index++;	
}

void	phoneBook::count_incr(void)
{
	this->count++;
	if (this->count > 8)
		this->count = 8;
}

void	phoneBook::choice(void)
{
	std::cout<<"\033[0;32m***********************************************"<<std::endl;
	std::cout<<"* Please choose from these choices:           *"<<std::endl;
	std::cout<<"* ADD : add new contact to phonebook          *"<<std::endl;
	std::cout<<"* SEARCH : search for a specific contact      *"<<std::endl;
	std::cout<<"* EXIt : exit program                         *"<<std::endl;
	std::cout<<"***********************************************"<<std::endl;
}

bool	phoneBook::add_contact(void)
{
	contact *cnt;
	std::string input;
	int		index = this->get_index();

	cnt = &this->array[index];
	(*cnt).set_firstName();
	(*cnt).set_lastName();
	(*cnt).set_nickName();
	(*cnt).set_phoneNumber();
	(*cnt).set_darkSecret();
	this->index_incr();
	this->count_incr();
	return 0;
}

void	phoneBook::display(void)
{
	int		id;
	std::string input;

	this->printer();
	for(int i = 0; i < this->count; i++)
	{
		std::cout<<"|"<< std::setw(10) << (i + 1)<<"|";
		if (this->array[i].get_firstName().length() > 9)
			std::cout<<std::setw(9)<<this->array[i].get_firstName().substr(0, 9)<<".|";
		else
			std::cout<<std::right << std::setw(10)<<this->array[i].get_firstName()<<"|";
		if (this->array[i].get_lastName().length() > 9)
			std::cout<<std::setw(9)<<this->array[i].get_lastName().substr(0, 9)<<".|";
		else
			std::cout<<std::setw(10)<<this->array[i].get_lastName()<<"|";
		if (this->array[i].get_nickName().length() > 9)
			std::cout<<std::setw(9)<<this->array[i].get_nickName().substr(0, 9)<<".|"<<std::endl;
		else
			std::cout<<std::setw(10)<<this->array[i].get_nickName()<<"|"<<std::endl;
	}
	std::cout<<"Please choose an index or 0 to exit"<<std::endl;
	getline(std::cin, input);
	for(int i = 0; input[i]; i++)
	{
		if (!isnumber(input[i]))
		{
			std::cerr<<"ERROR"<<std::endl;
			return ;
		}
	}
	id = std::stoi(input);
	if (id >= 1 && id <= this->count)
	{
		std::cout<<"firstName   : "<<this->array[id - 1].get_firstName()<<std::endl;
		std::cout<<"lastName    : "<<this->array[id - 1].get_lastName()<<std::endl;
		std::cout<<"nickName    : "<<this->array[id - 1].get_nickName()<<std::endl;
		std::cout<<"phoneNumber : "<<this->array[id - 1].get_phoneNumber()<<std::endl;
		std::cout<<"darkSecret  : "<<this->array[id - 1].get_darkSecret()<<std::endl;
	}
	else if (id == 0)
		return ;
	else
	{
		std::cerr<<"ERROR"<<std::endl;
		return ;
	}

}

void	phoneBook::printer(void)
{
	std::cout<<"|"<<std::setw(10)<<"index";
	std::cout<<"|"<<std::setw(10)<<" firstname";
	std::cout<<"|"<<std::setw(10)<<" lastname";
	std::cout<<"|"<<std::setw(10)<<" nickname"<<"|"<<std::endl;
}
