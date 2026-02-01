/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:30:34 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/01 15:50:56 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
    std::cout << C_GREEN << "[ClapTrap] Constructor called\n" << C_RESET;
}

ClapTrap::~ClapTrap() {
    std::cout << C_GREEN << "[ClapTrap] Destructor called\n" << C_RESET;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
    std::cout << C_GREEN << "[ClapTrap] Copy constructor called\n" << C_RESET;
    *this = copy;
}


ClapTrap&  ClapTrap::operator=(const ClapTrap& copy) {
    std::cout << C_GREEN << "[ClapTrap] Copy assignment operator called\n" << C_RESET;
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hit_points = copy._hit_points;
        this->_energy_points = copy._energy_points;
        this->_attack_damage = copy._attack_damage;
    }
    return *this;
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
    std::cout << "ClapTrap " << this->_name << " has taken " << amount << ", now he has " << this->_hit_points << " health points\n";
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

void	ClapTrap::printAttributes( void ) {
	std::cout << "hitpoints: " << this->_hit_points
		<< "\nenergy_points: " << _energy_points
		<< "\nattack_damage: " << _attack_damage << std::endl;
}
