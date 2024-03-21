/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:11:42 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/20 15:51:28 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "contact.hpp"

# define _MAXCONTACTS 8
# define END 2
# define CMD_NOT_VALID 3

class Phonebook
{
	private:
		Contact	_contacts[_MAXCONTACTS];
		int		_numContacts;
	public:
		Phonebook();
		~Phonebook();
		void	addContact(Contact &contact);
		int		searchContact();
		void	displayContacts(int width, int i);
		void	printIndex(int index);
		int		askForIndex(int &index);
		
};

#endif