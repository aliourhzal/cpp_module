/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 01:18:58 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/03 01:23:44 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename S>
void swap(S &arg1, S &arg2)
{
	S tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template<typename MIN>
MIN min(MIN a, MIN b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename MAX>
MAX max(MAX a, MAX b)
{
	if (a > b)
		return (a);
	return (b);
}