/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 22:50:03 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/01 17:08:33 by gpollast         ###   ########.fr       */
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
    std::cout << C_GREEN << "[DiamondTrap] Constructor called\n" << C_RESET;
	this->_hit_points = FragTrap::HP;
	this->_energy_points = ScavTrap::EP;
	this->_attack_damage = FragTrap::AD;

}

DiamondTrap::DiamondTrap(const DiamondTrap& copy): ClapTrap(copy), FragTrap(copy), ScavTrap(copy) {
    std::cout << C_GREEN << "[DiamondTrap] Copy constructor called\n" << C_RESET;
	*this = copy;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& copy) {
    std::cout << C_GREEN << "[DiamondTrap] Copy assignment operator called\n" << C_RESET;
	if (this != &copy)
	{
		FragTrap::operator=(copy);
		ScavTrap::operator=(copy);
		this->_name = copy._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << C_GREEN << "[DiamondTrap] Destructor called\n" << C_RESET;
}

void	DiamondTrap::whoAmI() {
	std::cout << "My name is " << C_CYAN << _name << C_RESET << " and my ClapTrap name is " << C_CYAN << ClapTrap::_name << C_RESET << '\n';
}
