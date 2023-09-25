/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:52:52 by fchanane          #+#    #+#             */
/*   Updated: 2023/04/11 20:52:53 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void    find_and_calculate(std::string content, std::map<std::string, double> Data)
{
    std::string date;
    std::string val;
    double       value;

    size_t pos = content.find(" | ");
    date = content.substr(0, pos);
    val = content.substr(pos + 3);
    value = stod(val);
    std::map<std::string, double>::iterator it = Data.find(date);
    if (it != Data.end())
        std::cout<<date<<" => "<<val<<" = "<<(value * it->second)<<std::endl;
    else
    {
        Data.insert(std::pair<std::string, double>(date, value));
        std::map<std::string, double>::iterator it = Data.find(date);
        if (it == Data.begin())
        {
            std::cerr<<"out of range date"<<std::endl;
            Data.erase(date);
        }
        else
        {
            --it;
            std::cout<<date<<" => "<<  val <<" = ";
            std::cout<<std::fixed << std::setprecision(5) << (value * it->second)<<std::endl;
            Data.erase(date);
        }
    }
}

int main(int ac, char **av)
{
    BitcoinExchange b;
    std::map<std::string, double> Data = b.getData();
    std::string content;

    if (check_bad_input(ac, av[1]))
        return 1;
    std::ifstream in(av[1]);
    std::getline(in, content, '\n');
    while (std::getline(in, content, '\n'))
    {
        if (is_valid_format(content))
            find_and_calculate(content, Data);
        content.clear();
    }
}
