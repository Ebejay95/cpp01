/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:12:58 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/18 07:46:38 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << name << " exists from now on..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " is history..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
