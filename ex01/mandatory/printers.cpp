/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:33:57 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/20 16:05:06 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"
#include "../includes/utils.hpp"

void	printerLoop(void)
{
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	std::cout << "Please enter command:" << std::endl;
}

void	printerStart(void)
{
	std::cout << std::endl;
	std::cout << "***** This is your amazing PHONEBOOK *****" << std::endl;
}

void	printerInitSearch(int width)
{
	std::cout << std::endl;
	std::cout << "|";
	std::cout << std::setw(width) << std::right << "INDEX";
	std::cout << "|";
	std::cout << std::setw(width) << std::right << "FIRST NAME";
	std::cout << "|";
	std::cout << std::setw(width) << std::right << "LAST NAME";
	std::cout << "|";
	std::cout << std::setw(width) << std::right << "NICKNAME";
	std::cout << "|" << std::endl;
}

void	printerIndex(void)
{
	std::cout << "Enter Index number (to return select 0)" << std::endl;
}
