/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 22:05:39 by pol               #+#    #+#             */
/*   Updated: 2025/07/06 11:07:56 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap();                                   // Default constructor
		FragTrap(const std::string& name);            // Param constructor
		FragTrap(const FragTrap& other);              // Copy constructor
		FragTrap& operator=(const FragTrap& other);   // Copy assignment
		~FragTrap();                                  // Destructor

		void highFivesGuys();                         // Special method
};

#endif

