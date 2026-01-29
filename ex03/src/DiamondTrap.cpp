/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 22:50:03 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/29 15:01:08 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), 
	FragTrap(name), 
	ScavTrap(name), 
	_name(name)
{
    std::cout << "[DiamondTrap] Constructor called\n";
	this->_hit_points = FragTrap::HP;
	this->_energy_points = ScavTrap::EP;
	this->_attack_damage = FragTrap::AD;

}

DiamondTrap::DiamondTrap(const DiamondTrap& copy): ClapTrap(copy), FragTrap(copy), ScavTrap(copy) {
    std::cout << "[DiamondTrap] Copy constructor called\n";
	*this = copy;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& copy) {
    std::cout << "[DiamondTrap] Copy assignment operator called\n";
	if (this != &copy)
	{
		FragTrap::operator=(copy);
		ScavTrap::operator=(copy);
		this->_name = copy._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "[DiamondTrap] Destructor called\n";
}

void	DiamondTrap::whoAmI() {
	std::cout << "My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << '\n';
}
