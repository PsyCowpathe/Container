/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:07:51 by agirona           #+#    #+#             */
/*   Updated: 2022/06/23 18:19:26 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "./reverse_iterator.hpp"
#include <iostream>
#include <list>

int		main(void)
{
	std::list<int>				lst;
	std::list<int>::iterator	it;

	lst.push_back(5);
	lst.push_back(10);
	lst.push_back(15);
	it = lst.begin();
	it++;
	ft::reverse_iterator<std::list<int>::iterator>	rit(it);
	std::cout << *rit << std::endl;
	std::cout << *++rit << std::endl;
	return (0);
}

/*int main()
{
    std::map<int, int> test;
    test[15] = 12;
   // test.insert(std::pair<int, int>(28, 29));
    test.insert(std::pair<int, int>(42, 28));
    std::map<int, int>::iterator it;
    it = test.begin();
    ft::reverse_iterator<std::map<int, int>::iterator> rit(it);
    std::cout << "first : " << rit->first << std::endl;
   // rit++;
    std::cout << "second : " << rit->second << std::endl;
    std::cout << "first : " << it->first << std::endl;
    //it++;
    std::cout << "second : " << it->second << std::endl;


}*/
