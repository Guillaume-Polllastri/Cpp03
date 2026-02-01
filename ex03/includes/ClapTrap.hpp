/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:19:22 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/01 17:08:23 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

# define C_GREEN "\033[32m"
# define C_RED "\033[31m"
# define C_CYAN "\033[36m"
# define C_RESET "\033[0m"

class ClapTrap {
protected:
    std::string _name;
    int         _hit_points;
    int         _energy_points;
    int         _attack_damage;

public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& copy);
    ClapTrap& operator=(const ClapTrap& copy);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
	void printAttributes();
};