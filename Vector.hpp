/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:58:15 by agirona           #+#    #+#             */
/*   Updated: 2022/06/23 16:21:22 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

# include <iostream>

//verifie pour les maj dans le nom du container

namespace ft
{

	template <class  T, class A = allocator<T>>
	class	Vector
	{
		public :
			typedef T 											value_type;
			typedef A 											allocator_type;
			typedef typename allocator_type::reference 			reference
			typedef typename allocator_type::const_reference 	const_eference
			typedef typename allocator_type::pointer 			pointer
			typedef typename allocator_type::const_pointer 		const_pointer

			Vector();
			~Vector();
		private :


		//Constructor && Destructor

		Vector::Vector()
		{
			std::cout << "New vector container created !" << std::endl;
		}

		Vector::~Vector()
		{
			std::cout << "Vector container destructed" << std::endl;
		}
	}
}
#endif
