/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:20:28 by gpollast          #+#    #+#             */
/*   Updated: 2026/02/01 17:01:31 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
protected:
	static const unsigned int HP;
	static const unsigned int EP;
	static const unsigned int AD;
public:
    FragTrap(std::string name);
    FragTrap(const FragTrap& copy);
    FragTrap&   operator=(const FragTrap& copy);
    ~FragTrap();

    void highFivesGuys(void);
};