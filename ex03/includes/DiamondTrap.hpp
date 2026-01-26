/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 13:28:40 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/26 19:02:21 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
private:
	std::string	_name;

public:
	DiamondTrap(std::string	name);
	DiamondTrap(const DiamondTrap& copy);
	DiamondTrap&	operator=(const DiamondTrap& copy);
	~DiamondTrap();

	void whoAmI();
};
