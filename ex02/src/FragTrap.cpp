/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 22:05:52 by pol               #+#    #+#             */
/*   Updated: 2025/07/06 11:08:07 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap()
{
	_name = "Unnamed";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called for " << _name << "\n";
}

// Parameterized constructor
FragTrap::FragTrap(const std::string& name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap name constructor called for " << _name << "\n";
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called\n";
	*this = other;
}

// Copy assignment operator
FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap assignment operator called\n";
	if (this != &other)
	{
		ClapTrap::operator=(other); // use base class assignment
	}
	return *this;
}

// Destructor
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << _name << "\n";
}

// Unique FragTrap method
void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " requests a positive high five! ✋\n";
}
