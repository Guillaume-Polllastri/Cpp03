/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:43:40 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/29 15:02:13 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

const int	ScavTrap::HP = 100;
const int	ScavTrap::EP = 50;
const int	ScavTrap::AD = 20;

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    std::cout << "[ScavTrap] Constructor called\n";
    this->_hit_points = HP;
    this->_energy_points = EP;
    this->_attack_damage = AD;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy) {
    std::cout << "[ScavTrap] Copy constructor called\n";
    *this = copy;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& copy) {
    std::cout << "[ScavTrap] Copy assignment operator called\n";
    if (this != &copy)
        ClapTrap::operator=(copy);
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "[ScavTrap] Destructor called\n";
}

void    ScavTrap::guardGate() {
    std::cout << this->_name << " the ScavTrap is now in Gate keeper mode\n";
}