/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 21:51:57 by pol               #+#    #+#             */
/*   Updated: 2025/07/06 11:20:10 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout << "\n--- ScavTrap canonical form ---\n";
	ScavTrap a("Guardian");
	ScavTrap b;
	b = a;

	std::cout << "\n--- Copy constructor ---\n";
	ScavTrap c(a);

	std::cout << "\n--- Attack overload test ---\n";
	a.attack("Intruder");
	b.attack("Enemy");

	std::cout << "\n--- Guard mode ---\n";
	a.guardGate();
	c.guardGate();

	std::cout << "\n--- Energy limit ---\n";
	for (int i = 0; i < 51; ++i)
		a.attack("Endless Enemy");

	std::cout << "\n--- Death test ---\n";
	b.takeDamage(150);
	b.attack("Doesn't work");
	b.beRepaired(5);
	b.guardGate(); // still works, since guardGate doesn't require HP

	std::cout << "\n--- Destruction order ---\n";
	return 0;
}
