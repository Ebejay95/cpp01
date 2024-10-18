/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 08:27:48 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/18 10:23:42 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "./Weapon.hpp"

class HumanB {
	private:
		Weapon	*weapon;
		std::string	name;
	public:
		HumanB(std::string name);
		~HumanB();
		void		attack();
		void		setWeapon(Weapon& weapon);
};
#endif
