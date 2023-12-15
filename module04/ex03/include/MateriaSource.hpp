/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:40:12 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/14 20:34:19 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*materias_[4];
		int			learned_;
	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(const MateriaSource &other);
		MateriaSource	&operator=(const MateriaSource &other);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

