// libraries
#include <QCoreApplication>
#include <iostream>
// #include <typeinfo>
// #include <cxxabi.h>
// #include <type_traits>

// project
#include "testcode.h"

// function
#define VARIABLE_NAME(variable) #variable



int main(int argc, char *argv[])
{
    QCoreApplication iii(argc, argv);

    TestCode::TestCode();

//    DeducingTypes d;
//    d.Test();

    // Todo:
    // int x = 9;
    // Function returns:
   // std::cout << "identifier x binds to value " <<  x << " on [heap | stack], with address: " << &x << std::endl;

    // Test-code for AnalyseExpression::getType
    {
        // TODO: visualize const, &, *
//        int z = 10;

//        std::uint64_t a = 10;
//        std::uint32_t b = 20;
//        std::uint8_t c = 30;
//        int d = 40;
//        std::string e = "hgjv";

//        const  std::uint64_t f = a;
//        const  std::uint32_t g = b;
//        const  std::uint8_t h = c;
//        const  int i = d;

//        const  std::uint64_t * j = &f;
//        const  std::uint32_t * k = &g;
//        const  std::uint8_t * l = &h;
//        const  int * m = &i;

//        const  int & n = *m;
//        AnalyseExpression::getType(VARIABLE_NAME(a), a);
//        AnalyseExpression::getType(VARIABLE_NAME(b), b);
//        AnalyseExpression::getType(VARIABLE_NAME(c), c);
//        AnalyseExpression::getType(VARIABLE_NAME(d), d);
//        AnalyseExpression::getType(VARIABLE_NAME(e), e);

//        AnalyseExpression::getType(VARIABLE_NAME(f), f);
//        AnalyseExpression::getType(VARIABLE_NAME(g), g);
//        AnalyseExpression::getType(VARIABLE_NAME(h), h);
//        AnalyseExpression::getType(VARIABLE_NAME(i), i);

//        AnalyseExpression::getType(VARIABLE_NAME(j), j);
//        AnalyseExpression::getType(VARIABLE_NAME(k), k);
//        AnalyseExpression::getType(VARIABLE_NAME(l), l);
//        AnalyseExpression::getType(VARIABLE_NAME(m), m);

//        AnalyseExpression::getType(VARIABLE_NAME(n), n);


        // TODO: Create a function that recognizes references
        // TODO: AnalyseExpression::isReference(8);
        // What version of c++ am I using?

        //    std::cout << std::boolalpha;
        //    std::cout << std::is_reference<int>::value << std::endl;
        //    std::cout << std::is_reference<int&>::value << std::endl;
        //    std::cout << std::is_reference<int&&>::value << std::endl;

        //    std::cout << std::is_reference<decltype(z)>::value << std::endl;
        //    std::cout << std::is_reference<decltype(n)>::value << std::endl;
        //    std::cout << std::is_reference<decltype(8)>::value << std::endl;

        // std::cout << std::is_reference<int&>::value << std::endl;
        // std::cout << std::is_reference<int&&>::value << std::endl;
    }

    return iii.exec();
}
