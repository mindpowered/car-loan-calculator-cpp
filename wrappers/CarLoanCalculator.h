#pragma once
/*!
 * Copyright Mind Powered Corporation 2020
 * 
 * https://mindpowered.dev/
 */

#include <maglev/MagLev.h>
#include <maglev/MagLevCpp.h>
#include <maglev/CppCallbackPtr.h>
#include <maglev/CppAny.h>

/*!
 * car loan
 * calculator
 */
class CarLoanCalculator {
public:

	/*!
	 * calc payments from price
	 * @param newCarPrice 
	 * @param tradeInAllowance 
	 * @param tradeInLoanBalance 
	 * @param downPaymentAndRebates 
	 * @param loanDuration in months
	 * @param salesTaxRate percent
	 * @param interestRate percent
	 * @return {array} payments and total interest
	*/
	std::vector<::maglev::CppAny> CalcPayments(double newCarPrice, double tradeInAllowance, double tradeInLoanBalance, double downPaymentAndRebates, double loanDuration, double salesTaxRate, double interestRate) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		//????
		myargs.push_back(param0);
		//????
		myargs.push_back(param1);
		//????
		myargs.push_back(param2);
		//????
		myargs.push_back(param3);
		//????
		myargs.push_back(param4);
		//????
		myargs.push_back(param5);
		//????
		myargs.push_back(param6);
		::maglev::CppAny ret = bus->call("CarLoanCalculator.CalcPayments", myargs);
		return ret;
	}

	/*!
	 * calc price from payment
	 * @param monthlyPayment 
	 * @param tradeInAllowance 
	 * @param tradeInLoanBalance 
	 * @param downPaymentAndRebates 
	 * @param loanDuration in months
	 * @param salesTaxRate percent
	 * @param interestRate percent
	 * @return {number} target price with tax and fees
	*/
	double CalcAffordability(double monthlyPayment, double tradeInAllowance, double tradeInLoanBalance, double downPaymentAndRebates, double loanDuration, double salesTaxRate, double interestRate) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("default");
		std::vector<::maglev::CppAny> myargs;
		//????
		myargs.push_back(param0);
		//????
		myargs.push_back(param1);
		//????
		myargs.push_back(param2);
		//????
		myargs.push_back(param3);
		//????
		myargs.push_back(param4);
		//????
		myargs.push_back(param5);
		//????
		myargs.push_back(param6);
		::maglev::CppAny ret = bus->call("CarLoanCalculator.CalcAffordability", myargs);
		return ret;
	}

};

