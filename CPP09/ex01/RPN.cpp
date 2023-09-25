/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 01:16:28 by fchanane          #+#    #+#             */
/*   Updated: 2023/04/14 01:16:29 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int check_bad_input(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr<<"Error"<<std::endl;
        return 1;
    }
    if (av[1][0] == '\0')
    {
        std::cerr<<"Error : empty argument"<<std::endl;
        return 1;
    }
    for (int i = 1; i < ac; i++)
    {
        for (int j = 0; av[i][j]; j++)
        {
            if ((av[i][j] < '0' || av[i][j] > '9') && av[i][j] != 32 && av[i][j] != '+' && av[i][j] != '-' && av[i][j] != '/' && av[i][j] != '*')
            {
                std::cerr<<"Error"<<std::endl;
                return 1;
            }
        }
    }
    return 0;

}

int operate_on(int left, int right, char op)
{
    if (op == '+')
        return (left + right);
    if (op == '-')
        return (left - right);
    if (op == '/')
    {
        if (right == 0)
        {
            std::cerr<<"Error : can't divide by 0"<<std::endl;
            exit(1);
        }
        else
            return (left / right);
    }
    if (op == '*')
        return (left * right);
    return -1;
}
