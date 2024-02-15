/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:05:45 by aamhamdi          #+#    #+#             */
/*   Updated: 2024/01/13 10:36:52 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<int> PmergeMe::parse_vec(char *argv[], int argc) {
    int                 nb;
    std::vector<int>    ret;
    
    for (int i = 1; i < argc; i++) {
        nb = str_to_int(argv[i]);
        if (nb < 0)
            throw std::invalid_argument("Error");
        ret.push_back(nb);
    }
    
    std::cout << "Before:";
    for (size_t i = 0; i < ret.size(); i++)
        std::cout << " " << ret[i];
    std::cout << "\n";
    return (ret);
}

std::list<int> PmergeMe::parse_list(char *argv[], int argc) {
    std::list<int>  ret;
    int             nb;
    
    for (int i = 1; i < argc; i++) {
        nb = str_to_int(argv[i]);
        if (nb < 0)
            throw std::invalid_argument("Error");
        ret.push_back(nb);
    }
    return (ret);
}

std::vector<std::pair<int, int> > merge(std::vector<std::pair<int, int> > l, std::vector<std::pair<int, int> > r) {
    std::vector<std::pair<int, int> > ret;
    
    while (l.size() || r.size())
    {
        if (l.size() && !r.size()) {
            ret.push_back(l.front());
            l.erase(l.begin());
        }
        else if (!l.size() && r.size()) {
            ret.push_back(r.front());
            r.erase(r.begin());
        }
        else if (l.front().first < r.front().first) {
            ret.push_back(l.front());
            l.erase(l.begin());
        } else {
            ret.push_back(r.front());
            r.erase(r.begin());
        }
    }
    return (ret);
}

std::vector<std::pair<int, int> > mergeSortVector(std::vector<std::pair<int, int> > v) {
    int mid = v.size() / 2;

    if (v.size() == 1)
        return (v);
    std::vector<std::pair<int, int> > right;
    right.insert(right.begin(), v.begin() + mid, v.begin() + v.size());
    v.erase(v.begin() + mid, v.begin() + v.size());
    return (merge(mergeSortVector(v), mergeSortVector(right)));
}

std::list<std::pair<int, int> > mergeList(std::list<std::pair<int, int> > l, std::list<std::pair<int, int> > r) {
    std::list<std::pair<int, int> > ret;
    
    while (l.size() || r.size())
    {
        if (l.size() && !r.size()) {
            ret.push_back(l.front());
            l.erase(l.begin());
        }
        else if (!l.size() && r.size()) {
            ret.push_back(r.front());
            r.erase(r.begin());
        }
        else if (l.front().first < r.front().first) {
            ret.push_back(l.front());
            l.erase(l.begin());
        } else {
            ret.push_back(r.front());
            r.erase(r.begin());
        }
    }
    return (ret);
}

std::list<std::pair<int, int> > mergeSortList(std::list<std::pair<int, int> > v) {
    int mid = v.size() / 2;

    if (v.size() == 1)
        return (v);
    std::list<std::pair<int, int> > right;
    std::list<std::pair<int, int> >::iterator a = v.begin();
    std::advance(a, mid); 
    right.insert(right.begin(), a, v.end());
    v.erase(a, v.end());
    return (mergeList(mergeSortList(v), mergeSortList(right)));
}
 
PmergeMe::PmergeMe() : backup(-1) {}
PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &c){
    *this = c;
}

PmergeMe & PmergeMe::operator=(const PmergeMe &c) {
    (void)c;
    return(*this);
}

void generator(std::vector<int> &cmb, const std::vector<int> &ja,int start,  int end) {
    if (ja[end] == ja.back())
        return ;
        
    int tmp = ja[start];
    while (tmp > ja[end])
        cmb.push_back(tmp--);
    generator(cmb, ja, start+1, start);
}

std::vector<int> PmergeMe::jachobstall_squence(int n) {
    std::vector<int>    jacobstall;
    std::vector<int>    ret;
    int                 index = 0;
    
    while (true) {
        if (index == 0 || index == 1)
            jacobstall.push_back(index);
        else {
            // Jn+1 = 2^n - Jn
            int nb = pow(2,(index-1)) - jacobstall[index - 1];
            jacobstall.push_back(nb);
            if (nb >= n)
                break ;
        }
        index++;
    }
    generator(ret, jacobstall,3, 2);
    return (ret);
}

void PmergeMe::sort_vector(char *argv[], int argc) {
    clock_t             start = clock();
    int                 first = -1,second = -1;
    this->backup = -1;
    std::vector<int>    data = parse_vec(argv, argc);
    std::vector<std::pair<int , int> >  pairs_data;
    
    for (std::vector<int>::iterator it = data.begin(); it != data.end(); it++) {
        first = *it;
        if (++it != data.end())
            second = *it;
        else {
            this->backup = first;
            break ;
        }
        std::pair<int, int> pair = std::make_pair(first, second);
        if (pair.first < pair.second)
            std::swap(pair.first, pair.second);
        pairs_data.push_back(pair);
    }
    
    pairs_data = mergeSortVector(pairs_data);
    data.clear();
    
    std::vector<std::pair<int, int> >::iterator it = pairs_data.begin();
    data.push_back(it->second);
    for (; it != pairs_data.end(); it++)
        data.push_back(it->first);
    
    int n = pairs_data.size(); 
    if (n > 1) {
        std::vector<int> cmb = jachobstall_squence(n);
        for (size_t i = 0; i < cmb.size(); i++) {
            size_t index = cmb[i] - 1;
            if (index >= pairs_data.size())
                continue;
            std::vector<std::pair<int, int> >::iterator it = pairs_data.begin();
            std::advance(it, index);
            int nb = it->second;
            
            std::vector<int>::iterator end = data.begin();
            std::advance(end , (index + i + 1));
            if ((index + i + 1) > data.size())
                end = data.end();
            std::vector<int>::iterator a = std::lower_bound(data.begin(), end , nb);
            data.insert(a, nb);
        }
    }
    
    if (this->backup >= 0) {
        std::vector<int>::iterator a = std::lower_bound(data.begin(), data.end(), backup);
        data.insert(a, backup);
    }
    clock_t end = clock();
    std::cout << "After : => ";
    std::vector<int>::iterator ite = data.begin();
    for (; ite != data.end(); ite++)
        std::cout << *ite << " ";
    std::cout << "\n";
    std::cout << "Time to process a range of " << data.size() << " elements with std::vector : " << end - start  << " us"<<  std::endl;
}

void PmergeMe::sort_list(char *argv[], int argc) {
    clock_t         start = clock();
    this->backup = -1;
    int             first = -1,second = -1;
    std::list<int>  data = parse_list(argv, argc);
    std::list<std::pair<int , int> >    pairs_data;
    
    for (std::list<int>::iterator it = data.begin(); it != data.end(); it++) {
        first = *it;
        if (++it != data.end())
            second = *it;
        else {
            this->backup = first;
            break ;
        }
        std::pair<int, int> pair = std::make_pair(first, second);
        if (pair.first < pair.second)
            std::swap(pair.first, pair.second);
        pairs_data.push_back(pair);
    }
    
    pairs_data = mergeSortList(pairs_data);
    data.clear();
    
    std::list<std::pair<int, int> >::iterator it = pairs_data.begin();
    data.push_back(it->second);
    for (; it != pairs_data.end(); it++)
        data.push_back(it->first);

    std::vector<int> cmb = jachobstall_squence(pairs_data.size());
    
    for (size_t i = 0; i < cmb.size(); i++) {
        size_t index = cmb[i] - 1;
        if (index >= pairs_data.size())
            continue;
        std::list<std::pair<int, int> >::iterator it = pairs_data.begin();
        std::advance(it, index);
        int nb = it->second;
        std::list<int>::iterator end = data.begin();
        std::advance(end , (index + i + 1));
            if ((index + i + 1) > data.size())
                end = data.end();
        std::list<int>::iterator a = std::lower_bound(data.begin(), end, nb);
        data.insert(a, nb);
    }

    if (this->backup >= 0) {
        std::list<int>::iterator a = std::lower_bound(data.begin(), data.end(), backup);
        data.insert(a, backup);
    }
    clock_t end = clock();
    std::cout << "Time to process a range of " << data.size() << " elements with std::list   : " << end - start << " us" << std::endl;
}

int str_to_int(const std::string &str) {
    if (str.empty())
        return (-1);
    for (size_t i = 0; i < str.size(); i++) {
        if(!std::isdigit(str[i]))
            return (-1);
    }
    int ret = 0;
    std::stringstream st(str);
    st >> ret;
    return (ret);
}