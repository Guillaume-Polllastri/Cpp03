/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:20:24 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/01 16:05:07 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    std::cout << C_GREEN << "[FragTrap] Constructor called\n" << C_RESET;
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& copy): ClapTrap(copy) {
    std::cout << C_GREEN << "[FragTrap] Copy constructor called\n" << C_RESET;
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
    std::string str;
    
    std::cout << this->_name << " want a positive high-fives\n";
    std::cout << "Enter your high-fives: ";
    std::cin >> str;
    if (!str.empty())
        std::cout << this->_name << " is very happy\n";
    else
        std::cout << this->_name << " is very sad\n";
}