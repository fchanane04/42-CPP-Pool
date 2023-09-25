/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 03:29:28 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/25 02:33:15 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Base.hpp"

Base::~Base()
{
	std::cout<<"Base destructor called"<<std::endl;
	return ;
}

Base *generate(void)
{
	int random;
	srand(time(0));
	random = rand() % 3;
	std::cout<<random<<std::endl;
	switch (random)
	{
		case 0:
			return (new A);
			break ;
		case 1:
			return (new B);
			break ;
		case 2:
			return (new C);
			break ;
		default :
			 break ;
	}
	return (NULL);
}

void printType(char c)
{
	std::cout<<c<<std::endl;
	return ;
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
	return (printType('A'));
	if (dynamic_cast<B*>(p))
		return (printType('B'));
	if (dynamic_cast<C*>(p))
		return (printType('C'));
	std::cout<<"ERROR : Not any type"<<std::endl;
	return ;
}

void identify(Base &p)
{
	try{
		A& a = dynamic_cast<A&>(p);
		printType('A');
	}
	catch(std::bad_cast& e)
	{
		try{
			B& b = dynamic_cast<B&>(p);
			printType('B');
		}
		catch(std::bad_cast& e)
		{
			try{
                C& c = dynamic_cast<C&>(p);
				printType('C');
			}
			catch(std::bad_cast& e)
			{
				std::cout<<"Error "<<e.what()<<std::endl;
			}
		}
	}
}


