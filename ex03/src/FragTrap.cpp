/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:20:24 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/30 13:54:54 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

const unsigned int	FragTrap::HP = 100;
const unsigned int	FragTrap::EP = 100;
const unsigned int	FragTrap::AD = 30;

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    std::cout << "[FragTrap] Constructor called\n";
    this->_hit_points = HP;
    this->_energy_points = EP;
    this->_attack_damage = AD;
}

FragTrap::FragTrap(const FragTrap& copy): ClapTrap(copy) {
    std::cout << "[FragTrap] Copy constructor called\n";
    *this = copy;
}

FragTrap&   FragTrap::operator=(const FragTrap& copy) {
    std::cout << "[FragTrap] Copy assignment operator called\n";
    if (this != &copy)
        ClapTrap::operator=(copy);
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "[FragTrap] Destructor called\n";
}

void    FragTrap::highFivesGuys(void) {
    std::string str;
    
    std::cout << this->_name << " want a positive high-fives\n";
    std::cout << "Enter your high-fives: ";
    std::cin >> str;
    if (!str.empty())
        std::cout << this->_name << " is very happy\n";
    else
        std::cout << this->_name << " is very sad\n";
}