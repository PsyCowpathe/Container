/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enable_if.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:30:14 by agirona           #+#    #+#             */
/*   Updated: 2022/06/27 16:45:18 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENABLE_IF_HPP
# define ENABLE_IF_HPP

namespace	ft
{
	template <bool, typename T = void>
	struct enable_if
	{

	};

	template <typename T>
	struct enable_if<true, T>
	{
		typedef T type;
	};
};

#endif
