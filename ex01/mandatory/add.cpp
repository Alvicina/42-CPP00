/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:37:51 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/20 16:04:30 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"
#include "../includes/utils.hpp"

std::string getNumber(const std::string &prompt)
{
	std::string	number;

	std::cout << prompt << std::endl;
	while (1)
	{
		std::getline(std::cin, number);
		if (std::cin.eof())
			return ("");
		if (std::cin.fail() || std::cin.bad())
		{
			std::cerr << "Error: cin crash" << std::endl;
			return ("") ;
		}
		if (number.empty() || isValidNumber(number))
		{
			std::cout << "Empty field / invalid number" << std::endl;
			std::cout << prompt << std::endl;
			continue ;
		}
		else
			return (number);
	}
}

std::string	getInfo(const std::string &prompt)
{
	std::string	info;
	std::string	parseInfo;

	std::cout << prompt << std::endl;
	while (1)
	{
		std::getline(std::cin, info);
		if (std::cin.eof())
			return ("");
		if (std::cin.fail() || std::cin.bad())
		{
			std::cerr << "Error: cin crash" << std::endl;
			return ("") ;
		}
		parseInfo = parseInput(info);
		if (parseInfo.empty())
		{
			std::cout << "Empty field" << std::endl;
			std::cout << prompt << std::endl;
			continue ;
		}
		else
			return (parseInfo);
	}
}

int	introduceContact(Phonebook &phonebook)
{	
	static int	index;
	Contact		contact;
	
	std::string firstName = getInfo("Enter first name:");
	if (firstName == "")
		return (EXIT_FAILURE);
	std::string lastName = getInfo("Enter last name:");
	if (lastName == "")
		return (EXIT_FAILURE);
	std::string nickname = getInfo("Enter nickname:");
	if (nickname == "")
		return (EXIT_FAILURE);
	std::string phoneNumber = getNumber("Enter phone number:");
	if (phoneNumber == "")
		return (EXIT_FAILURE);
	std::string darkestSecret = getInfo("Enter darkest secret:");
	if (darkestSecret == "")
		return (EXIT_FAILURE);
	contact = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret, index);
	index = (index + 1) % 8;
	phonebook.addContact(contact);
	return (EXIT_SUCCESS);
}
