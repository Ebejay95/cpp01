/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 07:52:47 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/18 08:09:32 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int	main(void)
{
	std::string originalString = "HI THIS IS BRAIN";
	std::string* stringPTR = &originalString;
	std::string& stringREF = originalString;

	std::cout << std::endl;

	std::cout << "Addresses" << std::endl;
	std::cout << "string: " << &originalString << std::endl;
	std::cout << "*pointer: " << stringPTR << std::endl;
	std::cout << "reference: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Values" << std::endl;
	std::cout << "string: " << originalString << std::endl;
	std::cout << "*pointer: " << *stringPTR << std::endl;
	std::cout << "reference: " << stringREF << std::endl;

	std::cout << std::endl;
	return (0);
}
