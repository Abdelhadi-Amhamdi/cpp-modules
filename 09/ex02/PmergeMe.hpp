/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:07:52 by aamhamdi          #+#    #+#             */
/*   Updated: 2024/01/07 18:36:21 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <ctime>
#include <cmath>
#include <algorithm>
#include <unistd.h>

class PmergeMe {
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe &c);
        PmergeMe & operator=(const PmergeMe &c);
        
        std::vector<int>    jachobstall_squence(int n);
        std::vector<int>    parse_vec(char *argv[], int argc);
        std::list<int>      parse_list(char *argv[], int argc);
        
        void    sort_vector(char *argv[], int argc);
        void    sort_list(char *argv[], int argc);
        
    private:
        int backup;
};

int     str_to_int(const std::string &str);


#endif