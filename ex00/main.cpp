/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:27:32 by jeberle           #+#    #+#             */
/*   Updated: 2024/09/10 18:42:31 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

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
	return (0);
}
