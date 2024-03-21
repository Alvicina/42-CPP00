/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:11:46 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/20 16:04:50 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"
#include "../includes/utils.hpp"

int	main(void)
{
	Phonebook phonebook;

	printerStart();
	if (startLoop(phonebook))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

	