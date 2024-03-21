/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:22:15 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/20 16:05:11 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"
#include "../includes/utils.hpp"

std::string	checkTruncate(std::string str, size_t width)
{
	if (str.length() >= width)
	{
		str[width - 1] = '.';
		str = str.substr(0, width);
	}
	return (str);
}

