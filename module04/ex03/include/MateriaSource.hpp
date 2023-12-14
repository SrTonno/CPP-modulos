/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:40:12 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/14 18:43:42 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


# include "IMateriaSource.hpp"
// # include "Ice.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(const MateriaSource &other);
		MateriaSource	&operator=(const MateriaSource &other);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

