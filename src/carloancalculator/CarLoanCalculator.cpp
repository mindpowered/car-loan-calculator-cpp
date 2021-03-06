// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_16d41c6fc5b8bf5d
#define INCLUDED_16d41c6fc5b8bf5d
#include "maglev/MagLev.h"
#endif
#ifndef INCLUDED_869a921fcf5bba54
#define INCLUDED_869a921fcf5bba54
#include "maglev/MagLevAny.h"
#endif
#ifndef INCLUDED_20db69a30a45e926
#define INCLUDED_20db69a30a45e926
#include "maglev/MagLevArray.h"
#endif
#ifndef INCLUDED_7f9204b932c8d809
#define INCLUDED_7f9204b932c8d809
#include "maglev/MagLevFunction.h"
#endif
#ifndef INCLUDED_95fa5e9194badcf5
#define INCLUDED_95fa5e9194badcf5
#include "maglev/MagLevNumber.h"
#endif
#ifndef INCLUDED_f4da16f85a617f60
#define INCLUDED_f4da16f85a617f60
#include "maglev/MagLevObject.h"
#endif
#ifndef INCLUDED_65acb6100057af6e
#define INCLUDED_65acb6100057af6e
#include "maglev/MagLevResult.h"
#endif
#ifndef INCLUDED_c859d2752ef86c43
#define INCLUDED_c859d2752ef86c43
#include "maglev/MagLevString.h"
#endif
#ifndef INCLUDED_carloancalculator_Calc
#include <carloancalculator/Calc.h>
#endif
#ifndef INCLUDED_carloancalculator_CarLoanCalculator
#include <carloancalculator/CarLoanCalculator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bbfaa45385015fd2_14_new,"carloancalculator.CarLoanCalculator","new",0x80048a30,"carloancalculator.CarLoanCalculator.new","carloancalculator/CarLoanCalculator.hx",14,0x513d31c1)
HX_LOCAL_STACK_FRAME(_hx_pos_bbfaa45385015fd2_20_registerMyMethods,"carloancalculator.CarLoanCalculator","registerMyMethods",0x2f9ef753,"carloancalculator.CarLoanCalculator.registerMyMethods","carloancalculator/CarLoanCalculator.hx",20,0x513d31c1)
HX_LOCAL_STACK_FRAME(_hx_pos_bbfaa45385015fd2_45_registerMyMethods,"carloancalculator.CarLoanCalculator","registerMyMethods",0x2f9ef753,"carloancalculator.CarLoanCalculator.registerMyMethods","carloancalculator/CarLoanCalculator.hx",45,0x513d31c1)
HX_LOCAL_STACK_FRAME(_hx_pos_bbfaa45385015fd2_19_registerMyMethods,"carloancalculator.CarLoanCalculator","registerMyMethods",0x2f9ef753,"carloancalculator.CarLoanCalculator.registerMyMethods","carloancalculator/CarLoanCalculator.hx",19,0x513d31c1)
HX_LOCAL_STACK_FRAME(_hx_pos_bbfaa45385015fd2_11_boot,"carloancalculator.CarLoanCalculator","boot",0x7c0d6062,"carloancalculator.CarLoanCalculator.boot","carloancalculator/CarLoanCalculator.hx",11,0x513d31c1)
namespace carloancalculator{

void CarLoanCalculator_obj::__construct( ::maglev::MagLev maglev){
            	HX_GC_STACKFRAME(&_hx_pos_bbfaa45385015fd2_14_new)
HXLINE(  15)		this->maglev = maglev;
HXLINE(  16)		this->calc =  ::carloancalculator::Calc_obj::__alloc( HX_CTX );
HXLINE(  17)		this->registerMyMethods();
            	}

Dynamic CarLoanCalculator_obj::__CreateEmpty() { return new CarLoanCalculator_obj; }

void *CarLoanCalculator_obj::_hx_vtable = 0;

Dynamic CarLoanCalculator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CarLoanCalculator_obj > _hx_result = new CarLoanCalculator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CarLoanCalculator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x57fae3e0;
}

void CarLoanCalculator_obj::registerMyMethods(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::carloancalculator::CarLoanCalculator,_gthis) HXARGC(1)
            		 ::maglev::MagLevResult _hx_run( ::maglev::MagLevArray args){
            			HX_STACKFRAME(&_hx_pos_bbfaa45385015fd2_20_registerMyMethods)
HXLINE(  21)			Float newCarPrice = ::hx::TCast<  ::maglev::MagLevNumber >::cast(args->get(0))->getFloat();
HXLINE(  22)			Float tradeInAllowance = ::hx::TCast<  ::maglev::MagLevNumber >::cast(args->get(1))->getFloat();
HXLINE(  23)			Float tradeInLoanBalance = ::hx::TCast<  ::maglev::MagLevNumber >::cast(args->get(2))->getFloat();
HXLINE(  24)			Float downPaymentAndRebates = ::hx::TCast<  ::maglev::MagLevNumber >::cast(args->get(3))->getFloat();
HXLINE(  25)			Float loanDuration = ::hx::TCast<  ::maglev::MagLevNumber >::cast(args->get(4))->getFloat();
HXLINE(  26)			Float salesTaxRate = ::hx::TCast<  ::maglev::MagLevNumber >::cast(args->get(5))->getFloat();
HXLINE(  27)			Float interestRate = ::hx::TCast<  ::maglev::MagLevNumber >::cast(args->get(6))->getFloat();
HXLINE(  28)			::Array< ::Dynamic> payments = _gthis->calc->calcPayments(newCarPrice,tradeInAllowance,tradeInLoanBalance,downPaymentAndRebates,loanDuration,salesTaxRate,interestRate);
HXLINE(  35)			 ::maglev::MagLevArray arr = ::maglev::MagLevArray_obj::create();
HXLINE(  36)			{
HXLINE(  36)				int _g = 0;
HXDLIN(  36)				while((_g < payments->length)){
HXLINE(  36)					 ::Dynamic payment = payments->__get(_g);
HXDLIN(  36)					_g = (_g + 1);
HXLINE(  37)					 ::maglev::MagLevObject obj = ::maglev::MagLevObject_obj::create();
HXLINE(  38)					obj->set(HX_("frequency",9c,82,ea,bb),::maglev::MagLevString_obj::fromString(( (::String)(payment->__Field(HX_("frequency",9c,82,ea,bb),::hx::paccDynamic)) )));
HXLINE(  39)					obj->set(HX_("payment",06,6b,d7,ed),::maglev::MagLevNumber_obj::fromFloat(( (Float)(payment->__Field(HX_("payment",06,6b,d7,ed),::hx::paccDynamic)) )));
HXLINE(  40)					obj->set(HX_("interest",aa,a2,6f,28),::maglev::MagLevNumber_obj::fromFloat(( (Float)(payment->__Field(HX_("interest",aa,a2,6f,28),::hx::paccDynamic)) )));
HXLINE(  41)					arr->push(obj);
            				}
            			}
HXLINE(  43)			return ::maglev::MagLevResult_obj::fromResult(arr);
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::carloancalculator::CarLoanCalculator,_gthis) HXARGC(1)
            		 ::maglev::MagLevResult _hx_run( ::maglev::MagLevArray args){
            			HX_STACKFRAME(&_hx_pos_bbfaa45385015fd2_45_registerMyMethods)
HXLINE(  46)			Float monthlyPayment = ::hx::TCast<  ::maglev::MagLevNumber >::cast(args->get(0))->getFloat();
HXLINE(  47)			Float tradeInAllowance = ::hx::TCast<  ::maglev::MagLevNumber >::cast(args->get(1))->getFloat();
HXLINE(  48)			Float tradeInLoanBalance = ::hx::TCast<  ::maglev::MagLevNumber >::cast(args->get(2))->getFloat();
HXLINE(  49)			Float downPaymentAndRebates = ::hx::TCast<  ::maglev::MagLevNumber >::cast(args->get(3))->getFloat();
HXLINE(  50)			Float loanDuration = ::hx::TCast<  ::maglev::MagLevNumber >::cast(args->get(4))->getFloat();
HXLINE(  51)			Float salesTaxRate = ::hx::TCast<  ::maglev::MagLevNumber >::cast(args->get(5))->getFloat();
HXLINE(  52)			Float interestRate = ::hx::TCast<  ::maglev::MagLevNumber >::cast(args->get(6))->getFloat();
HXLINE(  53)			 ::Dynamic result = _gthis->calc->calcAffordability(monthlyPayment,tradeInAllowance,tradeInLoanBalance,downPaymentAndRebates,loanDuration,salesTaxRate,interestRate);
HXLINE(  60)			 ::maglev::MagLevObject obj = ::maglev::MagLevObject_obj::create();
HXLINE(  61)			obj->set(HX_("price",89,4e,8b,c8),::maglev::MagLevNumber_obj::fromFloat(( (Float)(result->__Field(HX_("price",89,4e,8b,c8),::hx::paccDynamic)) )));
HXLINE(  62)			obj->set(HX_("tax",6b,5a,58,00),::maglev::MagLevNumber_obj::fromFloat(( (Float)(result->__Field(HX_("tax",6b,5a,58,00),::hx::paccDynamic)) )));
HXLINE(  63)			obj->set(HX_("interest",aa,a2,6f,28),::maglev::MagLevNumber_obj::fromFloat(( (Float)(result->__Field(HX_("interest",aa,a2,6f,28),::hx::paccDynamic)) )));
HXLINE(  64)			obj->set(HX_("total",c4,53,32,14),::maglev::MagLevNumber_obj::fromFloat(( (Float)(result->__Field(HX_("total",c4,53,32,14),::hx::paccDynamic)) )));
HXLINE(  65)			return ::maglev::MagLevResult_obj::fromResult(obj);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_bbfaa45385015fd2_19_registerMyMethods)
HXDLIN(  19)		 ::carloancalculator::CarLoanCalculator _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  20)		 ::maglev::MagLev _hx_tmp = this->maglev;
HXDLIN(  20)		_hx_tmp->_hx_register(HX_("CarLoanCalculator.CalcPayments",8a,53,f6,8f),::maglev::MagLevFunction_obj::fromFunction( ::Dynamic(new _hx_Closure_0(_gthis))));
HXLINE(  45)		 ::maglev::MagLev _hx_tmp1 = this->maglev;
HXDLIN(  45)		_hx_tmp1->_hx_register(HX_("CarLoanCalculator.CalcAffordability",0d,4f,ec,17),::maglev::MagLevFunction_obj::fromFunction( ::Dynamic(new _hx_Closure_1(_gthis))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CarLoanCalculator_obj,registerMyMethods,(void))


::hx::ObjectPtr< CarLoanCalculator_obj > CarLoanCalculator_obj::__new( ::maglev::MagLev maglev) {
	::hx::ObjectPtr< CarLoanCalculator_obj > __this = new CarLoanCalculator_obj();
	__this->__construct(maglev);
	return __this;
}

::hx::ObjectPtr< CarLoanCalculator_obj > CarLoanCalculator_obj::__alloc(::hx::Ctx *_hx_ctx, ::maglev::MagLev maglev) {
	CarLoanCalculator_obj *__this = (CarLoanCalculator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CarLoanCalculator_obj), true, "carloancalculator.CarLoanCalculator"));
	*(void **)__this = CarLoanCalculator_obj::_hx_vtable;
	__this->__construct(maglev);
	return __this;
}

CarLoanCalculator_obj::CarLoanCalculator_obj()
{
}

void CarLoanCalculator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CarLoanCalculator);
	HX_MARK_MEMBER_NAME(maglev,"maglev");
	HX_MARK_MEMBER_NAME(calc,"calc");
	HX_MARK_END_CLASS();
}

void CarLoanCalculator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(maglev,"maglev");
	HX_VISIT_MEMBER_NAME(calc,"calc");
}

::hx::Val CarLoanCalculator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"calc") ) { return ::hx::Val( calc ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"maglev") ) { return ::hx::Val( maglev ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerMyMethods") ) { return ::hx::Val( registerMyMethods_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CarLoanCalculator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"calc") ) { calc=inValue.Cast<  ::carloancalculator::Calc >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"maglev") ) { maglev=inValue.Cast<  ::maglev::MagLev >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CarLoanCalculator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("maglev",2a,df,2b,b3));
	outFields->push(HX_("calc",95,18,ba,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CarLoanCalculator_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /*  ::maglev::MagLev */ ,(int)offsetof(CarLoanCalculator_obj,maglev),HX_("maglev",2a,df,2b,b3)},
	{::hx::fsObject /*  ::carloancalculator::Calc */ ,(int)offsetof(CarLoanCalculator_obj,calc),HX_("calc",95,18,ba,41)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CarLoanCalculator_obj_sStaticStorageInfo = 0;
#endif

static ::String CarLoanCalculator_obj_sMemberFields[] = {
	HX_("maglev",2a,df,2b,b3),
	HX_("calc",95,18,ba,41),
	HX_("registerMyMethods",83,b1,0a,b9),
	::String(null()) };

::hx::Class CarLoanCalculator_obj::__mClass;

void CarLoanCalculator_obj::__register()
{
	CarLoanCalculator_obj _hx_dummy;
	CarLoanCalculator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("carloancalculator.CarLoanCalculator",3e,f2,8f,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CarLoanCalculator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CarLoanCalculator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CarLoanCalculator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CarLoanCalculator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CarLoanCalculator_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bbfaa45385015fd2_11_boot)
HXDLIN(  11)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,::cpp::VirtualArray_obj::__new(4)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))->init(1,HX_("checkstyle:LocalVariableName",c1,ac,a3,03))->init(2,HX_("checkstyle:MultipleStringLiterals",d6,ed,13,79))->init(3,HX_("checkstyle:MagicNumber",a5,aa,f4,8b)))))));
            	}
}

} // end namespace carloancalculator
