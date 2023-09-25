/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 07:05:31 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/26 03:55:42 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include<iostream>
#include <algorithm>
#include <vector>

// template <typename T>
// void easyfind(T container, int n)
// {
//     typename T::iterator it = std::find(container.begin(), container.end(), n);
//     if (it != container.end())
//     {
//         std::cout << "Exist!! You searched for: " << *it << std::endl;
//         return ;
//     }
//     throw std::runtime_error("Not found in container");	
// }

template <typename T>
int easyFind(T container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it != container.end()) {
        return it - container.begin();
    } else {
        throw std::runtime_error("ERROR!! : element is not in the container");
    }
}

#endif
