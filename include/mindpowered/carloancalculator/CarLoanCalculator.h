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
#include <carloancalculator/CarLoanCalculator.h>
#include <haxecpp/haxe_thread.h>
#include <string>
#include <map>

void __boot_maglev();
void __boot_carloancalculator();

/*!
 * car loan
 * calculator
 */
class CarLoanCalculator {
public:
	CarLoanCalculator()
	{
		run_haxe([](){
			__boot_maglev();
			__boot_carloancalculator();
			::maglev::MagLev m0 = ::maglev::MagLev_obj::getInstance("default");
			auto o = new ::carloancalculator::CarLoanCalculator_obj();
			o->__construct(m0);
		});
	}
	~CarLoanCalculator()
	{
	}

	/*!
	 * Calculate what the payments would be from the price of the new car and the parameters of the monthly loan payments
	 * @param newCarPrice price of the car new
	 * @param tradeInAllowance trade-in value
	 * @param tradeInLoanBalance loan balance after trade-in
	 * @param downPaymentAndRebates total amount of rebates plus downpayment
	 * @param loanDuration loan duration in months
	 * @param salesTaxRate  sales tax as percentage
	 * @param interestRate interest rate as percentage
	 * @return {std::vector<::maglev::CppAny>} payments and total interest
	*/
	std::vector<::maglev::CppAny> CalcPayments(double newCarPrice, double tradeInAllowance, double tradeInLoanBalance, double downPaymentAndRebates, double loanDuration, double salesTaxRate, double interestRate)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,newCarPrice,tradeInAllowance,tradeInLoanBalance,downPaymentAndRebates,loanDuration,salesTaxRate,interestRate](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(newCarPrice);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(tradeInAllowance);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(tradeInLoanBalance);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setDouble(downPaymentAndRebates);
			myargs.push_back(param3);
			::maglev::CppAny param4 = new ::maglev::CppAny_obj();
			param4->setDouble(loanDuration);
			myargs.push_back(param4);
			::maglev::CppAny param5 = new ::maglev::CppAny_obj();
			param5->setDouble(salesTaxRate);
			myargs.push_back(param5);
			::maglev::CppAny param6 = new ::maglev::CppAny_obj();
			param6->setDouble(interestRate);
			myargs.push_back(param6);
			bus->call("CarLoanCalculator.CalcPayments", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
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
	 * @return {double} target price with tax and fees
	*/
	double CalcAffordability(double monthlyPayment, double tradeInAllowance, double tradeInLoanBalance, double downPaymentAndRebates, double loanDuration, double salesTaxRate, double interestRate)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,monthlyPayment,tradeInAllowance,tradeInLoanBalance,downPaymentAndRebates,loanDuration,salesTaxRate,interestRate](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(monthlyPayment);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(tradeInAllowance);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(tradeInLoanBalance);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setDouble(downPaymentAndRebates);
			myargs.push_back(param3);
			::maglev::CppAny param4 = new ::maglev::CppAny_obj();
			param4->setDouble(loanDuration);
			myargs.push_back(param4);
			::maglev::CppAny param5 = new ::maglev::CppAny_obj();
			param5->setDouble(salesTaxRate);
			myargs.push_back(param5);
			::maglev::CppAny param6 = new ::maglev::CppAny_obj();
			param6->setDouble(interestRate);
			myargs.push_back(param6);
			bus->call("CarLoanCalculator.CalcAffordability", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		return ret->getDouble();
	}

};

