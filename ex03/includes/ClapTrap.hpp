/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:19:22 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/02 14:10:58 by gpollast         ###   ########.fr       */
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
    unsigned int         _hit_points;
    unsigned int         _energy_points;
    unsigned int         _attack_damage;

public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& copy);
    ClapTrap& operator=(const ClapTrap& copy);
    virtual ~ClapTrap();

    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
	void printAttributes();
};