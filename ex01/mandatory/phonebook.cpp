/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:11:50 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/20 16:05:02 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"
#include "../includes/utils.hpp"

//CONSTRUCTOR
Phonebook::Phonebook()
{
	_numContacts = 0;
}

//DESTRUCTOR
Phonebook::~Phonebook(){}

void	Phonebook::addContact(Contact &contact)
{
	int index;
	int	index2;
	
	index = contact.getIndex();
	index2 = index;
	index = ((index + 1) % 8);
	if (index)
		contact.setIndex(index);
	else
		contact.setIndex(index2 + 1);
	_contacts[index2] = contact;
	if (_numContacts < 8)
		_numContacts++;
}

void	Phonebook::printIndex(int index)
{
	int contact;

	if (index == 0)
	{
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}
	contact = index - 1;
	std::cout << std::endl;
	std::cout << "First Name: " << _contacts[contact].getFirstName() << std::endl;
	std::cout << "Last Name: " << _contacts[contact].getLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[contact].getNickname() << std::endl;
	std::cout << "Phonenumber: "<< _contacts[contact].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << _contacts[contact].getDarkestSecret() << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int	Phonebook::searchContact()
{
	int	i;
	int	width;
	int	index;

	index = 0;
	width = 10;
	i = 0;
	if (_numContacts == 0)
	{
		std::cout << "No contacts saved" << std::endl;
		return (EXIT_SUCCESS);
	}
	printerInitSearch(width);
	while (i < _numContacts)
	{
		displayContacts(width, i);
		i++;
	}
	if (askForIndex(index))
		return (EXIT_FAILURE);
	else
	{
		printIndex(index);
		return (EXIT_SUCCESS);
	}
}

void	Phonebook::displayContacts(int width, int i)
{
	std::cout << "|";
	std::cout << std::setw(width) << std::right << _contacts[i].getIndex();
	std::cout << "|";
	std::string firstName = _contacts[i].getFirstName();
	firstName = checkTruncate(firstName, width);
	std::cout << std::setw(width) << std::right << firstName;
	std::cout << "|";
	std::string lastName = _contacts[i].getLastName();
	lastName = checkTruncate(lastName, width);
	std::cout << std::setw(width) << std::right << lastName;
	std::cout << "|";
	std::string nickname = _contacts[i].getNickname();
	nickname = checkTruncate(nickname, width);
	std::cout << std::setw(width) << std::right << nickname;
	std::cout << "|" << std::endl;
}

int	Phonebook::askForIndex(int &index)
{
	while (1)
	{
		printerIndex();
		std::cin.clear();
		std::cin >> index;
		if (std::cin.eof() || std::cin.bad())
			break ;
		else if (std::cin.fail() || index > _numContacts) 
		{
			std::cin.clear();
			std::cerr << "Index not valid" << std::endl;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue ;
		}
		else
			return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}
