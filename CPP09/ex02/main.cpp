/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 03:44:55 by fchanane          #+#    #+#             */
/*   Updated: 2023/04/14 03:44:56 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int check_bad_input(int ac, char **av)
{
    char* endptr;
    if (ac < 2)
        return 1;
    for (int i = 1; i < ac; i++)
    {
        if (av[i][0] == '\0')
            return 1;
        for (int j = 0; av[i][j]; j++)
        {
            if (!isdigit(av[i][j]))
                return 1;
        }
    long int num = strtol(av[i], &endptr, 10);
    if (*endptr != '\0' || num > INT_MAX || num < INT_MIN)
        return 1;
    }
    return 0;
}

int main(int ac, char **av)
{
    if (check_bad_input(ac, av))
    {
        std::cerr<<"Error : bad input"<<std::endl;
        return 1;
    }
    PmergeMe P(ac, av);
    P.listSort();
    P.vectSort();
    return 0;
}
