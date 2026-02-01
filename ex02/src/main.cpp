/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:42:10 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/01 17:00:07 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>

int main(void)
{
	{
		FragTrap    toto("toto");

		toto.attack("tata");
		toto.takeDamage(5);
		toto.beRepaired(5);
		toto.highFivesGuys();
	}
	std::cout << std::endl;
	{
		ClapTrap    toto("toto");
		toto.attack("tata");
		toto.takeDamage(5);
		toto.beRepaired(5);
		// toto.highFivesGuys(); Cannot be used because this is a FragTrap method
	}
    return (0);
}