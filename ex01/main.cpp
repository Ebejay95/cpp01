/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:13:43 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/18 07:43:14 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int	main(void)
{
	Zombie *hordy = zombieHorde(6, "community-needy-Zombie");
	hordy[0].announce();
	hordy[1].announce();
	hordy[2].announce();
	hordy[3].announce();
	hordy[4].announce();
	hordy[5].announce();
	delete[] hordy;
	return (0);
}
