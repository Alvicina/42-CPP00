/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:31:56 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/20 15:36:44 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

void		printerLoop(void);
void		printerStart(void);
int			startLoop(Phonebook &phonebook);
std::string	getInfo(const std::string &command);
std::string getNumber(const std::string &prompt);
std::string	parseInput(const std::string &info);
int			isValidNumber(const std::string &number);
int 		checkCommand(const std::string &command, Phonebook &phonebook);
int			introduceContact(Phonebook &phonebook);
void		printerInitSearch(int width);
std::string	checkTruncate(std::string str, size_t width);
void		printerIndex(void);

#endif