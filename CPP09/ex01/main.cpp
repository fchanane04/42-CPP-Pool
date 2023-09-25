/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 01:16:14 by fchanane          #+#    #+#             */
/*   Updated: 2023/04/14 01:16:16 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    std::stack<int> stock;
    int left;
    int right;
    int result;

    if (check_bad_input(ac, av))
        return 1;
    int i = 0;
    result = av[1][0] - 48;
    while (av[1][i])
    {
        if (isdigit(av[1][i]))
            stock.push(av[1][i] - '0');
        else if (av[1][i] == '+' || av[1][i] == '-' || av[1][i] == '*' || av[1][i] == '/')
        {
            if (stock.size() >= 2)
            {
                right = stock.top();
                stock.pop();
                left = stock.top();
                stock.pop();
                result = operate_on(left, right, av[1][i]);
                stock.push(result);
            }
            else
            {
                std::cerr<<"Error"<<std::endl;
                return 1;
            }
        }
        i++;
    }
    stock.pop();
    if (!stock.empty())
    {
        std::cerr<<"Error : stack is not empty"<<std::endl;
        return 1;
    }
    std::cout<<result<<std::endl;
    return 0;
}
