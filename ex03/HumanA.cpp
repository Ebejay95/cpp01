/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 08:27:23 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/18 11:23:16 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"
#include "./Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon) {
	this->name = name;
}

HumanA::~HumanA() {}

void	HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
