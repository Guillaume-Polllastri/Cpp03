/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:42:10 by gpollast          #+#    #+#             */
/*   Updated: 2026/01/21 16:01:43 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap    toto("toto");

    toto.attack("tata");
    toto.takeDamage(5);
    toto.beRepaired(5);
    toto.highFivesGuys();
    return (0);
}