/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 08:26:49 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/18 09:05:23 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
	private:
		std::string	type;
	public:
		Weapon(std::string type)
		~Weapon();
		const std::string&	getType() const;
		void				setType(std::string type);
}
#endif

