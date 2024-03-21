/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getCommand.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:19:50 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/20 16:04:47 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"
#include "../includes/utils.hpp"

int	checkCommand(const std::string &command, Phonebook &phonebook)
{
	if (command == "ADD")
	{
		if(introduceContact(phonebook))
			return (EXIT_FAILURE);
	}	
	else if (command == "SEARCH")
	{
		if (phonebook.searchContact())
			return (EXIT_FAILURE);
	}
	else if (command == "EXIT")
	{
		std::cout << std::endl;
		std::cout << "Exit entered, bye bye" << std::endl;
		return (END);
	}
	else
	{
		std::cout << "Command entered invalid" << std::endl;
		return (CMD_NOT_VALID);
	}
	return (EXIT_SUCCESS);
}
