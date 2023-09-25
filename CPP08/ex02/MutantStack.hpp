/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 05:43:01 by fchanane          #+#    #+#             */
/*   Updated: 2023/01/26 05:43:04 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include<iostream>
#include<vector>
#include<deque>
#include<stack>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public :
        MutantStack(void) { return; }
        MutantStack(const MutantStack& src) {this->c = src.c; }
        MutantStack& operator=(const MutantStack& src) { this->c = src.c; return *this; }
        ~MutantStack(void) { return; }

        typedef typename Container::iterator iterator;
        typedef typename Container::const_iterator const_iterator;

        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }

        const_iterator cbegin() const { return this->c.cbegin(); }
        const_iterator cend() const { return this->c.cend(); }
};

#endif
