/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:53:07 by fchanane          #+#    #+#             */
/*   Updated: 2023/04/11 20:53:09 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
    std::ifstream from("data.csv");
    std::string line;
    std::getline(from, line, '\n');
    while (std::getline(from, line))
    {
        std::istringstream iss(line);
        std::string date;
        double value;
        if (std::getline(iss, date, ','))
        {
            iss >> value;
            this->data.insert(std::pair<std::string, double>(date, value));
        }
    }
    std::cout<<"Default constructor called"<<std::endl;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
    this->data = src.data;
    std::cout<<"Copy constructor called"<<std::endl;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const & src)
{
    this->data = src.data;
    std::cout<<"Assignment constructor called"<<std::endl;
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout<<"Destructor called"<<std::endl;
}

std::map<std::string, double>    BitcoinExchange::getData() const
{
    return (this->data);
}

int check_bad_input(int ac, char *av)
{
    std::string content;

    if (ac != 2)
    {
        std::cerr<<"Error: invalid arguments."<<std::endl;
        return 1;
    }
    std::ifstream in(av);
    if (!in.is_open())
    {
        std::cerr<<"Error: could not open file."<<std::endl;
        return 1;
    }
    std::getline(in, content, '\n');
    if (content.empty())
    {
        std::cerr<<"Error : file is empty"<<std::endl;
        in.close();
        return 1;
    }
    if (content.compare("date | value"))
    {
        std::cerr<<"Error : file header error"<<std::endl;
        in.close();
        return 1;
    }
    in.close();
    return 0;
}

int valid_range(std::string year, std::string month, std::string day)
{
    int year_nb;
    int month_nb;
    int day_nb;

    /******* year checking *******/
    if (year.length() != 4)
        return 0;
    for  (size_t i = 0; i < 4; i++)
    {
        if (!isdigit(year[i]))
            return 0;
    }
    year_nb = atoi(year.c_str());
    if  (year_nb < 0 || year_nb > 2023)
        return 0;

    /******* month checking *******/
    if (month.length() != 2)
        return 0;
    for  (size_t i = 0; i < 2; i++)
    {
        if (!isdigit(month[i]))
            return 0;
    }
    month_nb = atoi(month.c_str());
    if (month_nb < 1 || month_nb > 12)
        return 0;
    /******* day checking *******/
    if (day.length() != 2)
        return 0;
    for  (size_t i = 0; i < 2; i++)
    {
        if (!isdigit(day[i]))
            return 0;
    }
    day_nb = atoi(day.c_str());
    if (day_nb < 1 || day_nb > 31)
        return 0;
    if (month_nb == 4 || month_nb == 6 || month_nb == 9 || month_nb == 11)
    {
        if (day_nb > 30)
            return 0;
    }
    if (month_nb == 2)
    {
        if (year_nb % 4 == 0)
        {
            if (day_nb > 29)
                return 0;
        }
        else
        {
            if (day_nb > 28)
                return 0;
        }
    }
    return 1;
}

int valid_date(std::string date)
{
    std::string year;
    std::string month;
    std::string day;

    size_t pos = date.find("-");
    if (pos != 4)
        return 0;
    year = date.substr(0, pos);
    date = date.substr(pos + 1);
    pos = date.find(("-"));
    if (pos != 2)
        return 0;
    month = date.substr(0, pos);
    day = date.substr(pos + 1);
    if (!valid_range(year, month, day))
        return 0;
    return 1;
}

int valid_value(std::string value)
{
    double num;

    int pos = value.find(".");
    if ((pos == value.length() - 1) || pos == 0)
    {
        std::cerr<<"Error: bad input => "<<value<<std::endl;
        return 0;
    }
    if (value[0] == '-')
    {
        std::cerr<<"Error: not a positive number"<<std::endl;
        return 0;
    }
    if (pos > 3)
    {
        std::cerr<<"Error: too large a number"<<std::endl;
        return 0;
    }
    if (pos != std::string::npos)
    {
        for (size_t i = 0; i < pos; i++)
        {
            if (!isdigit(value[i]))
            {
                std::cerr<<"Error: bad input => "<<value<<std::endl;
                return 0;
            }
        }
        for (size_t j = pos + 1; j < value.length(); j++)
        {
            if (!isdigit(value[j]))
            {
                std::cerr<<"Error: bad input => "<<value<<std::endl;
                return 0;
            }
        }
    }
    else
    {
        for  (size_t i = 0; i < value.length(); i++)
        {
            if (!isdigit(value[i]))
            {
                std::cerr<<"Error: bad input => "<<value<<std::endl;
                return 0;
            }
        }
    }
    num = atof(value.c_str());
    if (num < 0 || num > 1000)
    {
        std::cerr<<"Error: out of range"<<std::endl;
        return 0;
    }
    return 1;
}

int is_valid_format(std::string content)
{
    std::string date;
    std::string value;

    if (content.empty())
    {
        std::cerr<<"Error: empty line"<<std::endl;
        return 0;
    }
    size_t pos = content.find(" | ");
    if (pos != std::string::npos)
    {
        date = content.substr(0, pos);
        if (!valid_date(date))
        {
            std::cerr<<"Error: bad input => "<<date<<std::endl;
            return 0;
        }
        value = content.substr(pos + 3);
        if (!valid_value(value))
            return 0;
        return 1;
    }
    std::cerr<<"Error: bad input => "<<content<<std::endl;
    return 0;
}