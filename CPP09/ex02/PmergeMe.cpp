/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 23:39:41 by fchanane          #+#    #+#             */
/*   Updated: 2023/04/14 23:39:43 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
    //std::cout<<"Default constructor called"<<std::endl;
}

PmergeMe::PmergeMe(int ac, char **av)
{
    for (int i = 1; i < ac; i++)
    {
        vect.push_back(atoi(av[i]));
        list.push_back(atoi(av[i]));
    }
    //std::cout<<"Parameterized constructor called"<<std::endl;
}

PmergeMe::PmergeMe(PmergeMe const & src)
{
    this->list = src.list;
    this->vect = src.vect;
    //std::cout<<"Copy constructor called"<<std::endl;
}

PmergeMe& PmergeMe::operator=(PmergeMe const & src)
{
    this->list = src.list;
    this->vect = src.vect;
    //std::cout<<"Assignment constructor called"<<std::endl;
    return *this;
}

PmergeMe::~PmergeMe()
{
    //std::cout<<"Destructor called"<<std::endl;
}

void PmergeMe::listPrinter(std::string msg)
{
    std::cout<<msg;
    for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout<<std::endl;
}

void PmergeMe::vectPrinter()
{
    size_t size = this->vect.size();
    for (size_t i = 0; i < size; i++)
    {
        std::cout<<this->vect[i]<<" ";// random access
    }
    std::cout<<std::endl;
}

void PmergeMe::mergeVect(int left, int mid, int right) {
    int i, j, k;
    std::vector<int> tmp(right - left + 1);

    i = left; // idx for left
    j = mid + 1; // idx for right
    k = 0; // tmp

    // Merge the two sub-arrays into the temporary array
    while (i <= mid && j <= right) {
        if (this->vect[i] <= this->vect[j]) {
            tmp[k] = this->vect[i];
            k++;
            i++;
        }
        else {
            tmp[k] = this->vect[j];
            k++;
            j++;
        }
    }

    // Copy the remaining elements of the left sub-array (if any) to the temporary array
    while (i <= mid) {
        tmp[k] = this->vect[i];
        k++;
        i++;
    }

    // Copy the remaining elements of the right sub-array (if any) to the temporary array
    while (j <= right) {
        tmp[k] = this->vect[j];
        k++;
        j++;
    }

    // Copy the sorted elements from the temporary array back to the original array
    for (i = left, k = 0; i <= right; i++, k++) {
        this->vect[i] = tmp[k];
    }
}

void PmergeMe::mergeInsertVect(int left, int right) {
    if (right - left > 10) {
        int mid = (left + right) / 2;
        mergeInsertVect(left, mid);
        mergeInsertVect(mid + 1, right);
        mergeVect(left, mid, right);
    }
    else if (left == right) {
        return;
    }
    else {
        for (int i = left + 1; i <= right; i++) {
            int key = this->vect[i];
            int j = i - 1;

            while (j >= left && this->vect[j] > key) {
                this->vect[j + 1] = this->vect[j];
                j--;
            }

            this->vect[j + 1] = key;
        } // this part use the insert sort
    }
}

void PmergeMe::mergeList(std::list<int>::iterator left, std::list<int>::iterator mid, std::list<int>::iterator right) {
    std::list<int> temp;
    std::list<int>::iterator i = left; // iterator for left sub-list
    std::list<int>::iterator j = mid; // iterator for right sub-list

    // Merge the two sub-lists into the temporary list
    while (i != mid && j != right) {
        if (*i <= *j) {
            temp.push_back(*i);
            i++;
        }
        else {
            temp.push_back(*j);
            j++;
        }
    }

    // Copy the remaining elements of the left sub-list (if any) to the temporary list
    while (i != mid) {
        temp.push_back(*i);
        i++;
    }

    // Copy the remaining elements of the right sub-list (if any) to the temporary list
    while (j != right) {
        temp.push_back(*j);
        j++;
    }

    // Copy the sorted elements from the temporary list back to the original list
    std::list<int>::iterator it = left;
    for (std::list<int>::iterator k = temp.begin(); k != temp.end(); k++) {
        *it = *k;
        it++;
    }
}

void PmergeMe::mergeInsertList(std::list<int>::iterator left, std::list<int>::iterator right) {
    if (std::distance(left, right) > 10) {
        std::list<int>::iterator mid = left;
        std::advance(mid, std::distance(left, right) / 2);
        mergeInsertList(left, mid);
        mergeInsertList(mid, right);
        mergeList(left, mid, right);
    }
    else if (left == right)
        return ;
    else
    {
        std::list<int>::iterator it1 = this->list.begin();
        std::list<int>::iterator it2;
        while (it1 != this->list.end()) {
            it2 = it1;
            while (it2 != this->list.begin() && *std::prev(it2) > *it2) {
                std::iter_swap(it2, std::prev(it2));
                --it2;
            }
            ++it1;
        }
    }
}

void PmergeMe::vectSort()// this is the function called to sort vector
{
    int size = this->vect.size();
    if (size <= 1)
        return ;
    //this->vectPrinter();
    clock_t start = clock();
    this->mergeInsertVect(0, size - 1);
    clock_t end = clock();
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    double cpu_time_used_us = cpu_time_used * 1000000.0;
    //this->vectPrinter();
    std::cout << "Time to process a range with std::vector : " << std::fixed << std::setprecision(5) << cpu_time_used_us << " us\n";
}

void PmergeMe::listSort() // this is the function called to sort list
{
    std::list<int>::iterator left = this->list.begin();
    std::list<int>::iterator right = this->list.end();

    if (std::distance(left, right) <= 1)
        return;
    this->listPrinter("Before: ");
    clock_t start = clock();
    this->mergeInsertList(left, right);
     clock_t end = clock();
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    double cpu_time_used_us = cpu_time_used * 1000000.0;
    this->listPrinter("after:  ");
    std::cout << "Time to process a range with std::list   : " << std::fixed << std::setprecision(5) << cpu_time_used_us << " us\n";
}