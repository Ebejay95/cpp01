/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 08:27:23 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/18 08:53:08 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"
#include "./Weapon.hpp"

HumanA::HumanA(std::string name, Weapon weapon) {
	this->name = name;
	this->weapon = weapon;
}

HumanA::~HumanA() {}
