/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeberle <jeberle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 08:13:32 by jeberle           #+#    #+#             */
/*   Updated: 2024/10/20 08:14:10 by jeberle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
		std::string	name;
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

	public:
		Harl();
		Harl(std::string name);
		~Harl();
		void	complain( std::string level );
};

#endif