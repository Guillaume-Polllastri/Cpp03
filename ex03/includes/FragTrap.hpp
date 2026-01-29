/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:20:28 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/29 14:59:08 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
protected:
	static const int HP;
	static const int EP;
	static const int AD;
public:
    FragTrap(std::string name);
    FragTrap(const FragTrap& copy);
    FragTrap&   operator=(const FragTrap& copy);
    ~FragTrap();

    void highFivesGuys(void);
};