/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:45:25 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/08/21 19:18:07 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl h;
	h.complain("DEBUG");
    h.complain("INFO");
    h.complain("WARNING");
    h.complain("ERROR");
    h.complain("UNKNOWN");
	return 0;
}