/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 21:51:57 by pol               #+#    #+#             */
/*   Updated: 2025/07/06 11:21:19 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::cout << "\n--- FragTrap canonical form ---\n";
	FragTrap a("HighFiveGuy");
	FragTrap b;
	b = a;

	std::cout << "\n--- Copy constructor ---\n";
	FragTrap c(a);

	std::cout << "\n--- High fives ---\n";
	a.highFivesGuys();
	b.highFivesGuys();
	c.highFivesGuys();

	std::cout << "\n--- Combat test ---\n";
	a.attack("Target");
	a.takeDamage(50);
	a.beRepaired(25);
	a.takeDamage(100); // death
	a.attack("Dead Target");
	a.beRepaired(10);
	a.highFivesGuys(); // still allowed for fun

	std::cout << "\n--- Energy depletion ---\n";
	for (int i = 0; i < 101; ++i)
		b.attack("Bot");

	std::cout << "\n--- Destruction order ---\n";
	return 0;
}

