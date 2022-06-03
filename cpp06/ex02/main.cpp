/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:15:13 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/02 23:52:33 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
	Base *ptrToObj;

	ptrToObj = generate();
	Base &refToObj = *ptrToObj;
	identify(ptrToObj);
	identify(refToObj);
}