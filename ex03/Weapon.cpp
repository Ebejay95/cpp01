/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 08:26:58 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/18 08:56:45 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

Weapon::Weapon(std::string	type) {
	this->type = type;
}

Weapon::~Weapon() {}


std::string	Weapon::getType() {
	return this->type;
}

void				Weapon::setType(std::string type) {
	this->type = type;
}
