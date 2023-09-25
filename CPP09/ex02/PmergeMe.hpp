/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:12:49 by fchanane          #+#    #+#             */
/*   Updated: 2023/04/27 15:12:51 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <iomanip>

class PmergeMe
{
    private :
        std::vector<int> vect;
        std::list<int> list;
    public :
        PmergeMe(void);
        PmergeMe(int ac, char **av);
        PmergeMe(PmergeMe const & src);
        PmergeMe& operator=(PmergeMe const & src);
        ~PmergeMe();
        void vectPrinter(void);
        void listPrinter(std::string msg);
        void mergeVect(int left, int mid, int right);
        void mergeList(std::list<int>::iterator left, std::list<int>::iterator mid, std::list<int>::iterator right);
        void mergeInsertVect(int left, int right);
        void mergeInsertList(std::list<int>::iterator left, std::list<int>::iterator right);
        void vectSort(void);
        void listSort(void);
};

#endif
