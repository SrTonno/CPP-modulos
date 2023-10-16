/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:45:23 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/16 17:16:11 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
: x(Fixed()),
  y(Fixed()){}

Point::Point(float _x, float _y)
: x(Fixed(_x)),
  y(Fixed(_y)) {}

Point::~Point()
{}

Point::Point(const Point &other)
: x(other.x),
  y(other.y){}

Point	&Point::operator=(const Point &other)
{
	(void)other;
	return (*this);
}
