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
	 * Calculate what the payments would be from the price of the new car and the parameters of the monthly loan payments
	 * @param newCarPrice price of the car new
	 * @param tradeInAllowance trade-in value
	 * @param tradeInLoanBalance loan balance after trade-in
	 * @param downPaymentAndRebates total amount of rebates plus downpayment
	 * @param loanDuration loan duration in months
	 * @param salesTaxRate  sales tax as percentage
	 * @param interestRate interest rate as percentage
	 * @return {array} payments and total interest
	*/
	std::vector<::maglev::CppAny> CalcPayments(double newCarPrice, double tradeInAllowance, double tradeInLoanBalance, double downPaymentAndRebates, double loanDuration, double salesTaxRate, double interestRate) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("carloancalculator");
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
	 * Calculate the price of the car from the monthly loan payment information
	 * @param monthlyPayment monthly payment amount
	 * @param tradeInAllowance trade-in value
	 * @param tradeInLoanBalance loan balance after trade-in
	 * @param downPaymentAndRebates total amount of rebates plus downpayment
	 * @param loanDuration loan duration in months
	 * @param salesTaxRate sales tax rate as percentage
	 * @param interestRate interest rate as percentage
	 * @return {number} target price with tax and fees
	*/
	double CalcAffordability(double monthlyPayment, double tradeInAllowance, double tradeInLoanBalance, double downPaymentAndRebates, double loanDuration, double salesTaxRate, double interestRate) {
		::maglev::MagLevCpp bus = ::maglev::MagLevCpp::getInstance("carloancalculator");
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

