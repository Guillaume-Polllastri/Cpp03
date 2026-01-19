/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:42:10 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/19 18:52:17 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void)
{
    ClapTrap    toto("toto");

    toto.attack("tata");
    toto.takeDamage(4);
    toto.beRepaired(4);
    toto.takeDamage(4);
    toto.takeDamage(4);
    toto.takeDamage(4);
    toto.attack("tata");
    return (0);
}