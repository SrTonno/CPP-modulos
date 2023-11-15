/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:04:26 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/15 13:21:23 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

template<class Whatever>
void	swap(Whatever &a, Whatever &b)
{
	Whatever swap;

	swap = a;
	a = b;
	b = swap;
}
template<typename Whatever>
Whatever	min(Whatever &a, Whatever &b)
{
	if (a < b)
		return (a);
	return (b);
}
template<typename Whatever>
Whatever	max(Whatever &a, Whatever &b)
{
	if (a > b)
		return (a);
	return (b);
}
