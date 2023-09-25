/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:45:16 by fchanane          #+#    #+#             */
/*   Updated: 2022/12/30 18:45:22 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cctype>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        for (int i = 1; i < ac; i++)
        {
            for (int j = 0; av[i][j]; j++)
            {
                std::cout<<static_cast<char>(toupper(av[i][j]));
            }
        }
        std::cout<<std::endl;
    }
    else
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    return (0);
}
