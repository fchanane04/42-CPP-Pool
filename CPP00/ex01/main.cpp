/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 19:51:38 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/01 18:51:33 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"phonebook.hpp"
#include <unistd.h>

int	main(void)
{
	phoneBook pb;
	std::string input;

	pb.choice();
	while (1)
	{
		while (input.empty())
		{
			std::cout << "\033[0;37mEnter a cmd :" << "$> ";
			getline(std::cin, input);
			if (!input.compare("\0"))
				exit(0);
		}
		if (!input.compare("ADD"))
		{
			pb.add_contact();
		}
		else if (!input.compare("SEARCH"))
		{
			pb.display();
		}
		else if (input == "EXIT")
		{
			exit(0);
		}
		else
			std::cerr<<"Unknown command!!"<<std::endl;
		input.clear();
	}
}
