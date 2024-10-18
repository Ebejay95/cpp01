/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:10:14 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/18 07:47:20 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

	void	announce(void);
	void	setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);
#endif
