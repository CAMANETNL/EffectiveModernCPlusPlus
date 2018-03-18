// Effective modern C++ - Steve Meyers
// Chapter 1 - Deducing types

#include "deducingtypes.h"
#include "variable.h"


void DeducingTypes::Test()
{
    int x = 27;
    const int cx = x;
    const int & rx = x;
    const int & rcx = cx;
    const int * cpx = & x;
//    Variable::describe(x);


//    std::cout << "x = " << AnalyseExpression::getType(x, false) << std::endl;
//    std::cout << "cx = " << AnalyseExpression::getType(cx, false) << std::endl;
//    std::cout << "rx = " << AnalyseExpression::getType(rx, false) << std::endl;
//    std::cout << "cpx = " << AnalyseExpression::getType(cpx, false) << std::endl;

    DeducingTypes::Case1 case1;
    std::cout << "CASE 1 ///////////////////////////////////////////////////////" << std::endl;
    std::cout << "//////////////////////////////////////////////////////////////" << std::endl;
    std::cout << "x = " << AnalyseExpression::getType(x, false) << std::endl;
    case1.f1(x);
    std::cout << "----" << std::endl;
    std::cout << "cx = " << AnalyseExpression::getType(cx, false) << std::endl;
    case1.f1(cx);
    std::cout << "----" << std::endl;
    std::cout << "rx = " << AnalyseExpression::getType(rx, false) << std::endl;
    case1.f1(rx);

    std::cout << "//////////////////////////////////////////////////////////////" << std::endl;
    std::cout << "x = " << AnalyseExpression::getType(x, false) << std::endl;
    case1.f2(x);
    std::cout << "----" << std::endl;
    std::cout << "cx = " << AnalyseExpression::getType(cx, false) << std::endl;
    case1.f2(cx);
    std::cout << "----" << std::endl;
    std::cout << "rx = " << AnalyseExpression::getType(rx, false) << std::endl;
    case1.f2(rx);

    std::cout << "//////////////////////////////////////////////////////////////" << std::endl;
    std::cout << " & x. x = " << AnalyseExpression::getType(x, false) << std::endl;
    case1.f3(&x);
    std::cout << "----" << std::endl;
    std::cout << "cpx = " << AnalyseExpression::getType(cpx, false) << std::endl;
    case1.f3(cpx);

    DeducingTypes::Case2 case2;
    std::cout << "CASE 2 ///////////////////////////////////////////////////////" << std::endl;
    std::cout << "//////////////////////////////////////////////////////////////" << std::endl;
    std::cout << "x = " << AnalyseExpression::getType(x, false) << std::endl;
    case2.f(x);
    std::cout << "----" << std::endl;
    std::cout << "cx = " << AnalyseExpression::getType(cx, false) << std::endl;
    case2.f(cx);
    std::cout << "----" << std::endl;
    std::cout << "rx = " << AnalyseExpression::getType(rx, false) << std::endl;
    case2.f(rx);
    std::cout << "----" << std::endl;
    std::cout << "27  --> klopt niet, moet int&& geven!" << std::endl;
    case2.f(27);

    DeducingTypes::Case3 case3;
    std::cout << "CASE 3 ///////////////////////////////////////////////////////" << std::endl;
    std::cout << "//////////////////////////////////////////////////////////////" << std::endl;
    std::cout << "x = " << AnalyseExpression::getType(x, false) << std::endl;
    case3.f(x);
    std::cout << "----" << std::endl;
    std::cout << "cx = " << AnalyseExpression::getType(cx, false) << std::endl;
    case3.f(cx);
    std::cout << "----" << std::endl;
    std::cout << "rx = " << AnalyseExpression::getType(rx, false) << std::endl;
    case3.f(rx);
}

// Case 1: ParamType is a Reference or Pointer, but not a Universal Reference
template<typename T>
void DeducingTypes::Case1::f1(T & param)
{
    std::cout << F1 << std::endl;
    std::cout << "T = ? " << std::endl;
    std::cout <<  "param = " << AnalyseExpression::getType(param, std::is_reference<decltype(param)>::value)  << std::endl;
}

// Case 1: ParamType is a Reference or Pointer, but not a Universal Reference
template<typename T>
void DeducingTypes::Case1::f2(const T & param)
{
    std::cout << F2 << std::endl;
    std::cout << "T = ? " << std::endl;
    std::cout <<  "param = " << AnalyseExpression::getType(param, std::is_reference<decltype(param)>::value)  << std::endl;
}

// Case 1: ParamType is a Reference or Pointer, but not a Universal Reference
template<typename T>
void DeducingTypes::Case1::f3(T * param)
{
    std::cout << F3 << std::endl;
    std::cout << "T = ? " << std::endl;
    std::cout <<  "param = " << AnalyseExpression::getType(param, std::is_reference<decltype(param)>::value)  << std::endl;
}

// Case 2:
template<typename T>
void DeducingTypes::Case2::f(T && param)
{
    std::cout << F << std::endl;
    std::cout << "T = ? " << std::endl;
    std::cout <<  "param = " << AnalyseExpression::getType(param, std::is_reference<decltype(param)>::value)  << std::endl;
}


// Case 3:
template<typename T>
void DeducingTypes::Case3::f(T param)
{
    std::cout << F << std::endl;
    std::cout << "T = ? " << std::endl;
    std::cout <<  "param = " << AnalyseExpression::getType(param, std::is_reference<decltype(param)>::value)  << std::endl;
}

