#ifndef ANALYSEEXPRESSION_H
#define ANALYSEEXPRESSION_H

#include <typeinfo>
#include <type_traits>
#include <iostream>
#include <cxxabi.h>

class AnalyseExpression
{

public:
    // * Some implementations (such as MSVC, IBM, Oracle) produce a human-readable type name.
    // Others, most notably gcc and clang, return the mangled name.
    // The mangled name can be converted to human-readable form using implementation-specific API such as abi::__cxa_demangle

    template <class T>
    static std::string getType(T& expression, bool isReference = false)
    {
        std::string result;
        if (sizeof(expression) <= 0)
            return result;

        typedef typename std::remove_reference<decltype(expression)>::type dereferencedExpression;
        result += std::is_const<dereferencedExpression>::value ? "const " : "";
        // * get type of expression
        result += std::string(abi::__cxa_demangle(typeid(expression).name(), 0, 0, 0)) + " ";
        result += isReference ? "& ": "";
        // get value
        // TODO: somehow parse depending on the type:
        // TODO: result += "= " ; // todo: make overload function for to_string + std::to_string(expression);
        // TODO: result += std::is_pointer<decltype(expression)>::value ? " pointer " : std::to_string(expression);
        return result;
    }
};

#endif // ANALYSEEXPRESSION_H
