/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:30:34 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/19 18:52:54 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
    std::cout << name << " the new Claptrap is appeared\n";
}

ClapTrap::~ClapTrap() {
    std::cout << this->_name << " the Claptrap is disappeared\n";
}

void ClapTrap::attack(const std::string& target) {
    if (this->_hit_points == 0 || this->_energy_points == 0)
    {
        std::cout << this->_name << " the ClapTrap cant do anything\n";
        return ;
    }
    this->_energy_points--;
    std::cout << "ClapTrap " << this->_name
        << " attacks " << target
        << ", causing " << this->_attack_damage
        << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (static_cast<int>(amount) > this->_hit_points)
        this->_hit_points = 0;
    else
        this->_hit_points -= amount;
    std::cout << "ClapTrap " << this->_name << " has taken " << amount << ", now he has " << this->_hit_points << " health points" << '\n';
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hit_points == 0 || this->_energy_points == 0)
    {
        std::cout << this->_name << " the ClapTrap cant do anything\n";
        return ;
    }
    this->_hit_points += amount;
    std::cout << this->_name << " the ClapTrap repairs itself, he has now " << this->_hit_points << " health points\n";
}
