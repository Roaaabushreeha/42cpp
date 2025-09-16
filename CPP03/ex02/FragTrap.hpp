/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 18:30:08 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/09/06 13:49:14 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTRAP_HPP
#define FragTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public :
  
    FragTrap();
     FragTrap(const std :: string &name);
    FragTrap (const FragTrap& other);
    FragTrap& operator=(const FragTrap  &other);
    ~FragTrap();
    void attack(const std::string& target) ;
    void highFivesGuys(void);
    ClapTrap();
};
#endif