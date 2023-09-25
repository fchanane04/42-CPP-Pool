/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 07:05:03 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/26 03:54:43 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	std::vector<int> v;
	v.push_back(2);
	v.push_back(14);
	v.push_back(4);
	v.push_back(14);
	v.push_back(5);
    try {
        std::cout<<easyFind(v, 14);
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
