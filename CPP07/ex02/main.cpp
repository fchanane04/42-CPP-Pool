/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 04:34:39 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/25 12:37:38 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        //const int value = rand();
		const int value = rand() % 3;
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
		// for (int i = 0; i < MAX_VAL; i++)
		// {
		// 	std::cout<<tmp[i]<<std::endl;
		// }
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout<<numbers[i]<<std::endl;
	}
	
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        //std::cerr << e.what() << '\n';
		std::cerr << "this is not okay" << '\n';
    }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     numbers[i] = rand();
    // }
    delete [] mirror;//
    return 0;
}