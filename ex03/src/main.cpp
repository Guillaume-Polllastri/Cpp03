/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:42:10 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/02 14:11:18 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>

int main(void)
{
    DiamondTrap	toto("toto");
	ScavTrap	tata("tata");
	FragTrap	tutu("tutu");	

	toto.whoAmI();
	std::cout << "\nDiamondTrap\n";
	toto.printAttributes();
	std::cout << "\nScavTrap\n";
	tata.printAttributes();
	std::cout << "\nFragTrap\n";
	tutu.printAttributes();
	std::cout << std::endl;
	toto.attack("target");
    return (0);
}