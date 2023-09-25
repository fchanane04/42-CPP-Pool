/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 03:48:04 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/25 02:32:53 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Base.hpp"

int main (void)
{
    Base *base = generate();
    //Base *base = new Base;
    identify(base);
    identify(*base);
    delete base;
}
