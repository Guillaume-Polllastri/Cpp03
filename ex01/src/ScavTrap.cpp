/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:43:40 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/21 14:50:13 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy) {
    *this = copy;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& copy) {
    std::cout << "ScavTrap copy assignment operator called\n";
    if (this != &copy)
        ClapTrap::operator=(copy);
    return *this;
}



ScavTrap::~ScavTrap() {
}

void    ScavTrap::guardGate() {
    std::cout << this->_name << " the ScavTrap is now in Gate keeper mode\n";
}