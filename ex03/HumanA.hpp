/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 08:27:11 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/18 10:11:50 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "./Weapon.hpp"

class HumanA {
	private:
		Weapon&		weapon;
		std::string	name;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void		attack();
};
#endif
