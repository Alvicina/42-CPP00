/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:01:55 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/13 12:40:27 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/megaphone.hpp"

int	main(int argc, char **argv)
{
	Megaphone	megaphone;
	
	if (megaphone.check(argc))
		return (1);
	megaphone.change(argv);
	return (0);
}