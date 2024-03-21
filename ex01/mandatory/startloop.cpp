/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startloop.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:35:48 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/20 16:05:15 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"
#include "../includes/utils.hpp"

int	startLoop(Phonebook &phonebook)
{
	std::string command;
	int			status;

	status = 0;
	while (1)
	{
		printerLoop();
		std::cin.clear();
		std::getline(std::cin, command);
		if (std::cin.eof())
			break ;
		if (std::cin.fail() || std::cin.bad())
		{
			std::cerr << "Error: cin crash" << std::endl;
			break ;
		}
		status = checkCommand(command, phonebook);
		if (status == EXIT_FAILURE)
			break ;
		else if (status == END)
			return (EXIT_SUCCESS);
		else
			continue;
	}
	return (EXIT_FAILURE);
}
