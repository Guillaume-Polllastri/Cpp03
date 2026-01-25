/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:20:24 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/25 20:24:47 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    std::cout << "ScavTrap constructor called\n";
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& copy): ClapTrap(copy) {
    std::cout << "ScavTrap copy constructor called\n";
    *this = copy;
}

FragTrap&   FragTrap::operator=(const FragTrap& copy) {
    std::cout << "ScavTrap copy assignment operator called\n";
    if (this != &copy)
        ClapTrap::operator=(copy);
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "ScavTrap destructor called\n";
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