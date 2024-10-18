/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 08:27:46 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/18 10:24:20 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"
#include "./Weapon.hpp"
#include <iostream>

HumanB::HumanB(std::string name) {
	this->name = name;
}

HumanB::~HumanB() {}

void	HumanB::attack() {
	if (this->weapon) {
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	} else {
		std::cout << this->name << " has no weapon to attack with" << std::endl;
	}
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}
