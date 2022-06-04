/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 20:25:52 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/03 20:32:11 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void easyfind(T c, int ser)
{
	typename T::iterator it;
	it = std::find(c.begin(), c.end(), ser);
	if (it == c.end())
	{
		throw (std::exception());
	}
}