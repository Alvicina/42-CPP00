/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:43:41 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/20 16:04:39 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"
#include "../includes/utils.hpp"

//CONSTRUCTOR

Contact::Contact() {}

Contact::Contact(std::string firstName, std::string lastName, 
	std::string nickname, std::string phoneNumber, std::string darkestSecret, int index)
{
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickname = nickname;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
	this->_index = index;
}

//DESTRUCTOR
Contact::~Contact(){}

//SETTERS
void	Contact::setFirstName(std::string firstName)
{
	_firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	_lastName = lastName;
}

void	Contact::setNickname(std::string nickName)
{
	_nickname = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	_darkestSecret = darkestSecret;
}

void	Contact::setIndex(int index)
{
	_index = index;
}

//GETTERS
std::string	Contact::getFirstName() const
{
	return (this->_firstName);
}

std::string	Contact::getLastName() const
{
	return (this->_lastName);
}

std::string	Contact::getNickname() const
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}

int	Contact::getIndex() const
{
	return (this->_index);
}