/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pol <pol@student.42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-05 21:51:57 by pol               #+#    #+#             */
/*   Updated: 2025-07-05 21:51:57 by pol              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap s("Sentinel");

	s.attack("TargetDummy");
	s.takeDamage(40);
	s.beRepaired(20);
	s.guardGate();

	for (int i = 0; i < 6; ++i)
		s.attack("Enemy");

	s.takeDamage(100);  // pour le mettre KO
	s.attack("Another enemy"); // ne devrait rien faire
	s.beRepaired(10); // ne devrait rien faire non plus

	return 0;
}
