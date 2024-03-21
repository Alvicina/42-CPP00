/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:01:48 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/13 13:02:37 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE_HPP
# define MEGAPHONE_HPP

# include <iostream>

class	Megaphone
{
	private:

	public:
		Megaphone();
		~Megaphone();
		int		check(int argc);
		void	change(char **argv);
};

#endif