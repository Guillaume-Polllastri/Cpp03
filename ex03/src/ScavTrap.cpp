/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:43:40 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/02 14:09:16 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

const unsigned int	ScavTrap::HP = 100;
const unsigned int	ScavTrap::EP = 50;
const unsigned int	ScavTrap::AD = 20;

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    std::cout << C_GREEN << "[ScavTrap] Constructor called\n" << C_RESET;
    this->_hit_points = HP;
    this->_energy_points = EP;
    this->_attack_damage = AD;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy) {
    std::cout << C_GREEN << "[ScavTrap] Copy constructor called\n" << C_RESET;
    *this = copy;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& copy) {
    std::cout << C_GREEN << "[ScavTrap] Copy assignment operator called\n" << C_RESET;
    if (this != &copy)
        ClapTrap::operator=(copy);
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << C_GREEN << "[ScavTrap] Destructor called\n" << C_RESET;
}

void ScavTrap::attack(const std::string& target) {
    if (this->_hit_points == 0 || this->_energy_points == 0)
    {
        std::cout << this->_name << " the ScavTrap cant do anything\n";
        return ;
    }
    this->_energy_points--;
    std::cout << "ScavTrap " << this->_name
        << " attacks " << target
        << ", causing " << this->_attack_damage
        << " points of damage!\n";
}

void    ScavTrap::guardGate() {
    std::cout << this->_name << " the ScavTrap is now in Gate keeper mode\n";
}