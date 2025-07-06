/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:25:03 by pol               #+#    #+#             */
/*   Updated: 2025/07/06 11:19:31 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "\n--- ClapTrap canonical form ---\n";
	ClapTrap a("Alpha");
	ClapTrap b("Bravo");

	std::cout << "\n--- Assignment operator ---\n";
	b = a;

	std::cout << "\n--- Copy constructor ---\n";
	ClapTrap c(b);

	std::cout << "\n--- Attacks ---\n";
	a.attack("Target A");
	b.attack("Target B");

	std::cout << "\n--- Taking damage ---\n";
	a.takeDamage(5);
	a.takeDamage(6); // should reach 0 HP

	std::cout << "\n--- Repairs ---\n";
	b.beRepaired(3);
	b.beRepaired(20); // test large heal
	b.takeDamage(999); // try to repair after death
	b.beRepaired(1);

	std::cout << "\n--- Destruction order ---\n";
	return 0;
}
