/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:42:10 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/01 16:15:26 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#include <iostream>

int main(void)
{
	{
		ScavTrap    toto("toto");
		
		toto.attack("tata"); // Use ScavTrap method
		toto.takeDamage(5);
		toto.beRepaired(5);
		toto.guardGate();
	}
	std::cout << std::endl;
	{
		ClapTrap	toto("toto");

		toto.attack("tata"); // Use ClapTrap method
		toto.takeDamage(5);
		toto.beRepaired(5);
		//toto.guardGate(); Doesn't work because it is a method of ScavTrap
	}
    return (0);
}