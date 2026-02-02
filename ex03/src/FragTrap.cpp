/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:20:24 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/02 14:06:50 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

const unsigned int	FragTrap::HP = 100;
const unsigned int	FragTrap::EP = 100;
const unsigned int	FragTrap::AD = 30;

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    std::cout << C_GREEN << "[FragTrap] Constructor called\n" << C_RESET;
    this->_hit_points = HP;
    this->_energy_points = EP;
    this->_attack_damage = AD;
}

FragTrap::FragTrap(const FragTrap& copy): ClapTrap(copy) {
    std::cout << C_GREEN << "[FragTrap] Copy constructor called\n" << C_RESET;
    *this = copy;
}

FragTrap&   FragTrap::operator=(const FragTrap& copy) {
    std::cout << C_GREEN << "[FragTrap] Copy assignment operator called\n" << C_RESET;
    if (this != &copy)
        ClapTrap::operator=(copy);
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << C_GREEN << "[FragTrap] Destructor called\n" << C_RESET;
}

void    FragTrap::highFivesGuys(void) {
    std::cout << this->_name << " want a positive high-fives\n";
}
