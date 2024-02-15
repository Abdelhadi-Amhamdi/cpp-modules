/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:31:48 by aamhamdi          #+#    #+#             */
/*   Updated: 2023/12/14 15:16:59 by aamhamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main() {
    MutantStack<int>  mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int> abc;
    abc = mstack;
    MutantStack<int>::iterator it = abc.begin();
    MutantStack<int>::iterator ite = abc.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "--------------------------------\n";
    std::list<int> my_list;

    my_list.push_back(5);
    my_list.push_back(17);
    std::cout << my_list.front() << std::endl;
    my_list.pop_back();
    std::cout << my_list.size() << std::endl;
    my_list.push_back(3);
    my_list.push_back(5);
    my_list.push_back(737);
    //[...]
    my_list.push_back(0);
    std::list<int>::iterator it_lst = my_list.begin();
    std::list<int>::iterator ite_lst = my_list.end();
    ++it_lst;
    --it_lst;
    while (it_lst != ite_lst)
    {
        std::cout << *it_lst << std::endl;
        ++it_lst;
    }
    return 0;
}