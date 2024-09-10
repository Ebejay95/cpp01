/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:13:26 by jeberle           #+#    #+#             */
/*   Updated: 2024/09/10 17:35:42 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie::~Zombie()
{
	std::cout << name << " is history..." << std::endl;
}
