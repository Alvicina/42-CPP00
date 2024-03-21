/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:29:26 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/21 12:43:35 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/megaphone.hpp"

Megaphone::Megaphone()
{
	
}

Megaphone::~Megaphone()
{

}

int	Megaphone::check(int argc)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	return (0);
		
}

void Megaphone::change(char **argv)
{
	size_t	i;
	size_t	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		std::string str = argv[i];
		while (str[j])
		{
			if (str[j] >= 97 && str[j] <= 122)
			{
				str[j] = std::toupper(str[j]);
				std::cout << (str[j]);
			}
			else
				std::cout << (str[j]);
			j++;
		}
		std::cout << " ";
		i++;
	}
	std:: cout << std::endl;
}
