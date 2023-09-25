/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:14:28 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/10 19:34:50 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replace_s(std::string buff, std::string s1, std::string s2)
{
	int index = 0;
	int	len = s1.length();
	if (!len)
	{
		std::cerr<<"Syntax error, S1 should not be empty"<<std::endl;
		exit (1);
	}
	while(index != -1)
	{ 
		index = buff.find(s1, index);
		
		if (index > -1)
		{
			buff.erase(index, len);
			buff.insert(index, s2);
		}
	}
	return (buff);
}

int	main(int ac, char **av)
{
	std::string content;
	if (ac != 4)
	{
		std::cerr<<"Syntax error, expected : <filename> <string1> <string2>"<<std::endl;
		return 1;
	}
	std::ifstream in(av[1]);
	if (!in.is_open())
	{
    	std::cerr << "Error while opening file" << std::endl;
   		return 1;
  	}
	std::string name = av[1];
	name.append(".replace");
	std::ofstream out(name);
	std::getline(in, content, '\0');
	out<<replace_s(content, av[2], av[3]);
	in.close();
	out.close();
}