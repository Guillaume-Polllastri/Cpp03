/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:28:38 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/02 14:11:03 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
protected:
	static const unsigned int HP;
	static const unsigned int EP;
	static const unsigned int AD;
public:
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& copy);
    ScavTrap& operator=(const ScavTrap& copy);
    virtual ~ScavTrap();

	virtual void attack(const std::string& target);
    void guardGate();
};
