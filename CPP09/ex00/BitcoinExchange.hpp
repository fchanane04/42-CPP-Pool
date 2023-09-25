/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:14:16 by fchanane          #+#    #+#             */
/*   Updated: 2023/04/15 21:14:18 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>
#include <fstream>
#include <sstream>

class BitcoinExchange
{
    private :
        std::map<std::string, double> data;
    public :
        BitcoinExchange(void);
        BitcoinExchange(BitcoinExchange const & src);
        BitcoinExchange& operator=(BitcoinExchange const & src);
        ~BitcoinExchange();
        std::map<std::string, double> getData() const;
        
};

int check_bad_input(int ac, char *av);
int is_valid_format(std::string content);
int valid_date(std::string date);
int valid_value(std::string value);
int valid_range(std::string , std::string , std::string );

#endif
