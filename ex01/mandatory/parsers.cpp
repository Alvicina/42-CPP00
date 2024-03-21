/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:39:35 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/20 16:04:57 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"
#include "../includes/utils.hpp"

std::string	parseInput(const std::string &info)
{
	size_t first;
	size_t last;
	
	last = 0;
	first = info.find_first_not_of(" \t\r\n");
	if (std::string::npos == first)
		return ("");
	last = info.find_last_not_of(" \t\r\n");
	return (info.substr(first, last - first + 1));
}

int	isValidNumber(const std::string &number)
{
	size_t	i;
	size_t	flag;

	i = 0;
	flag = 0;
	while (number[i] && number[i] == '+')
	{
		flag++;
		i++;
	}
	if (flag > 1)
		return (EXIT_FAILURE);
	else
	{
		while (number[i] && std::isdigit(number[i]))
			i++;
		if (!number[i] && i != flag)
			return (EXIT_SUCCESS);
		return (EXIT_FAILURE);
	}
}
