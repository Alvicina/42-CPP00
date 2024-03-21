/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:01:18 by alvicina          #+#    #+#             */
/*   Updated: 2024/03/21 12:16:53 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Account.hpp"
#include <iomanip>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


//********************** CONSTRUCTOR *****************************//
Account::Account(int initial_deposit)
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	this->_accountIndex = getNbAccounts();
	_totalAmount = _totalAmount + this->_amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
	_nbAccounts++;
}

//********************** DESTRUCTOR *****************************//
Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
	_nbAccounts--;
}

//********************** GETTERS *****************************//
int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

//********************** OTROS *****************************//
void	Account::_displayTimestamp(void)
{
	time_t	now;

	now = time(NULL);
	std::cout << std::put_time(localtime(&now), "[%Y%m%d_%H%M%S] ");
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" 
	<< _totalAmount << ";deposits:" << _totalNbDeposits 
	<< ";withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:"
	<< _amount << ";deposits:" << _nbDeposits << ";withdrawals:"
	<< _nbWithdrawals;
	std::cout << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_amount = _amount + deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount;
	_nbDeposits++;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
	_totalAmount = _totalAmount + deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_amount = _amount - withdrawal;
	if (checkAmount())
	{
		_amount = _amount + withdrawal;
		std::cout << ";withdrawal:refused" << std::endl;
		return (EXIT_FAILURE);
	}
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount;
	_nbWithdrawals++;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalAmount = _totalAmount - withdrawal;
	_totalNbWithdrawals++;
	return (EXIT_SUCCESS);
}

int	Account::checkAmount(void) const
{
	if (_amount < 0)
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}