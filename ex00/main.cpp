/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:27:32 by jeberle           #+#    #+#             */
/*   Updated: 2024/09/11 12:34:23 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

/*
 * Stack vs Heap Allocation for Zombies:
 *
 * Stack Allocation (using Zombie z("Name")):
 * - Faster allocation and deallocation
 * - Automatically managed memory (no need for manual delete)
 * - Suitable for short-lived zombies or when the lifetime is limited to the current scope
 * - Limited by stack size (could be an issue for many zombies)
 *
 * Heap Allocation (using new Zombie("Name")):
 * - More flexible memory management
 * - Allows for longer lifetimes, spanning multiple functions or scopes
 * - Necessary when you need to return a Zombie from a function (like in newZombie())
 * - Requires manual memory management (must call delete to avoid leaks)
 * - Slightly slower allocation and deallocation
 *
*/
int	main(void)
{
	Zombie *tom = new Zombie("Tom");
	delete tom;
	Zombie *bob = new Zombie("Bob");
	bob->announce();
	delete bob;
	Zombie *foo = new Zombie("foo");
	Zombie *bar = new Zombie("bar");
	delete foo;
	delete bar;
	std::cout << "++++++++++++++++++++++" << std::endl;
	Zombie *barny = newZombie("Barny");
	delete barny;
	randomChump("Albert");
	return (0);
}
