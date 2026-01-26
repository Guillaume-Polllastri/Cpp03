/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 22:50:03 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/26 12:58:22 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), 
	FragTrap(name), 
	ScavTrap(name), 
	_name(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 30;

}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) {
	*this = copy;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& copy) {
	if (this != &copy)
	{
		FragTrap::operator=(copy);
		ScavTrap::operator=(copy);
		this->_name = copy._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	
}
