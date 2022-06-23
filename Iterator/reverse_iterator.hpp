/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_iterator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirona <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:06:51 by agirona           #+#    #+#             */
/*   Updated: 2022/06/23 18:19:23 by agirona          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef REVERSE_ITERATOR_HPP
# define REVERSE_ITERATOR_HPP

# include "./iterators_traits.hpp"

namespace ft
{
	template <class Iterator>
	class reverse_iterator
	{
		private :
			Iterator	current;
		public:
		//member type
			typedef Iterator iterator_type;
			typedef typename iterator_traits<Iterator>::value_type value_type;
			typedef typename iterator_traits<Iterator>::reference reference;
			typedef typename iterator_traits<Iterator>::pointer pointer;
			typedef typename iterator_traits<Iterator>::difference_type difference_type;
			typedef typename iterator_traits<Iterator>::iterator_category iterator_category;

		//constructor
      		reverse_iterator() : current() { }
      		reverse_iterator(iterator_type __x) : current(__x) { }
      		reverse_iterator(const reverse_iterator& __x) : current(__x.current) { }

      		template<typename _Iter>
      		reverse_iterator(const reverse_iterator<_Iter>& __x) : current(__x.base()) { }

      		iterator_type	base() const
      		{
		 		 return current;
	  		}
	  
      		reference operator*() const
      		{
        		Iterator __tmp = current;
        		return *--__tmp;
      		}

      		pointer operator->() const
      		{
				  return &(operator*());
	 		}

     		 reverse_iterator	&operator++()
      		{
       			 --current;
       			 return *this;
      		}

      		reverse_iterator	operator++(int)
      		{
        		reverse_iterator __tmp = *this;
        		--current;
        		return __tmp;
      		}

      		reverse_iterator	&operator--()
      		{
        		++current;
        		return *this;
      		}

      		reverse_iterator	operator--(int)
      		{
        		reverse_iterator __tmp = *this;
        		++current;
        		return __tmp;
      		}

      		reverse_iterator operator+(difference_type __n) const
      		{
		 		 return reverse_iterator(current - __n);
	  		}

      		reverse_iterator	&operator+=(difference_type __n)
      		{
        		current -= __n;
        		return *this;
      		}

      		reverse_iterator	operator-(difference_type __n) const
      		{
		  		return reverse_iterator(current + __n);
	  		}

      		reverse_iterator	&operator-=(difference_type __n)
      		{
        		current += __n;
        		return *this;
      		}

      		reference	operator[](difference_type __n) const
      		{
		  		return *(*this + __n);
	  		}
	};

  	template<typename _Iterator>
  	bool operator==(const reverse_iterator<_Iterator>& __x, const reverse_iterator<_Iterator>& __y)
  	{
		return __x.base() == __y.base();
  	}

  	template<typename _Iterator>
  	bool operator<(const reverse_iterator<_Iterator>& __x, const reverse_iterator<_Iterator>& __y)
    {
		return __y.base() < __x.base();
	}

  	template<typename _Iterator>
  	bool operator!=(const reverse_iterator<_Iterator>& __x, const reverse_iterator<_Iterator>& __y)
    {
		return !(__x == __y);
	}

  	template<typename _Iterator>
  	bool  operator>(const reverse_iterator<_Iterator>& __x, const reverse_iterator<_Iterator>& __y)
  	{
		return __y < __x;
	}

  	template<typename _Iterator>
  	bool operator<=(const reverse_iterator<_Iterator>& __x, const reverse_iterator<_Iterator>& __y)
  	{
		return !(__y < __x);
	}

  	template<typename _Iterator>
  	bool  operator>=(const reverse_iterator<_Iterator>& __x, const reverse_iterator<_Iterator>& __y)
  	{
		return !(__x < __y);
  	}
};

#endif
