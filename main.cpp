/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:07:51 by agirona           #+#    #+#             */
/*   Updated: 2022/06/27 14:29:42 by agirona          ###   ########lyon.fr   */
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
