// Generated by Haxe 4.1.1
#ifndef INCLUDED_carloancalculator_Calc
#define INCLUDED_carloancalculator_Calc

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(carloancalculator,Calc)

namespace carloancalculator{


class HXCPP_CLASS_ATTRIBUTES Calc_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Calc_obj OBJ_;
		Calc_obj();

	public:
		enum { _hx_ClassId = 0x3c111297 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="carloancalculator.Calc")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"carloancalculator.Calc"); }
		static ::hx::ObjectPtr< Calc_obj > __new();
		static ::hx::ObjectPtr< Calc_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Calc_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Calc",b5,44,93,2c); }

		::Array< ::Dynamic> calcPayments(Float newCarPrice,Float tradeInAllowance,Float tradeInLoanBalance,Float downPaymentAndRebates,Float loanDuration,Float salesTaxRate,Float interestRate);
		::Dynamic calcPayments_dyn();

		 ::Dynamic calcAffordability(Float monthlyPayment,Float tradeInAllowance,Float tradeInLoanBalance,Float downPaymentAndRebates,Float loanDuration,Float salesTaxRate,Float interestRate);
		::Dynamic calcAffordability_dyn();

		 ::Dynamic calcPay(Float principal,Float annualInterestRatePercent,int paymentsPerYear,int totalPayments,::String frequencyString);
		::Dynamic calcPay_dyn();

};

} // end namespace carloancalculator

#endif /* INCLUDED_carloancalculator_Calc */ 
