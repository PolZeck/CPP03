/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pol <pol@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:25:03 by pol               #+#    #+#             */
/*   Updated: 2025/06/29 23:03:59 by pol              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap a("Alpha");
	ClapTrap b("Beta");

	a.attack("Beta");
	b.takeDamage(0);

	b.attack("Alpha");
	a.takeDamage(0);

	a.beRepaired(5);
	b.beRepaired(3);

	for (int i = 0; i < 11; ++i)
		a.attack("Beta");  // pour tester la limite d’énergie

	return 0;
}
