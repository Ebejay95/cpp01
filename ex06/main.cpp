/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 08:12:31 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/20 08:45:02 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int	main(void)
{
	Harl *harl = new Harl();
	std::cout << std::endl;
	harl->complain("DEBUG");
	std::cout << std::endl;
	harl->complain("INFO");
	std::cout << std::endl;
	harl->complain("WARNING");
	std::cout << std::endl;
	harl->complain("ERROR");
	std::cout << std::endl;
	harl->complain("INVALID");
	std::cout << std::endl;
	delete harl;
	return (0);
}
