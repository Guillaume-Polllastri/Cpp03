/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:28:38 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/21 14:41:27 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
public:
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& copy);
    ScavTrap& operator=(const ScavTrap& copy);
    ~ScavTrap();

    void guardGate();
};