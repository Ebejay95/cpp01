/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:26:48 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/18 11:48:31 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "./sed_is_for_loosers [filename] [s1] [s2]" << std::endl;
		return (1);
	}
	std::ifstream file(argv[1]);
	if (!file.good())
		std::cout << "file " << argv[1] << " not found"<< std::endl;
	return (0);
}
