/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:36:02 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/15 13:41:04 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

template<class I>
void	iter(I *pointer, I len, I (*func)(I))
{
	int i;

	i = 0;
	while(i < len)
	{
		pointer[i] = func(pointer[i])
		i++;
	}
}
