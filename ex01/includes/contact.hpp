/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:42:36 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/19 13:07:17 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	//atributes
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string _phoneNumber;
		std::string	_darkestSecret;
		int			_index;
		
	//methods
	public:
		//constructor
		Contact();
		Contact(std::string firstName, std::string lastName, 
			std::string nickname, std::string phoneNumber, 
			std::string darkestSecret, int index);
		
		//destructor
		~Contact();
		
		//setters
		void	setFirstName(std::string firstName);
		void	setLastName(std::string lastName);
		void	setNickname(std::string nickName);
		void	setPhoneNumber(std::string phoneNumber);
		void	setDarkestSecret(std::string darkestSecret);
		void	setIndex(int index);

		//getters
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickname() const;
		std::string	getPhoneNumber() const;
		std::string	getDarkestSecret() const;
		int			getIndex() const;
};

#endif