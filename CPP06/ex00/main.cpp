/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:51:33 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/24 02:43:57 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Scalar.hpp"

int	error_exit()
{
	std::cout<<"ERROR : Enter valid number of arguments"<<std::endl;
	return 1;
}

int main(int ac, char **av)
{
	std::string input;
	if (ac != 2)
		return (error_exit());
	input = av[1];
	if (input.length() == 1 || (input.length() == 3 && input[0] == '\'' && input[2] == '\''))
		handleChar(input);
	else
		{
			if (isInt(input))
			{
				handleInt(input);
				return 0;
			}
			if (isFloat(input))
			{
				handleFloat(input);
				return 0;
			}
			if (isDouble(input))
			{
				handleDouble(input);
				return 0;
			}
			std::cout<<"ERROR : input you entered is not a valid"<<std::endl;
		}
	return 0;
}
