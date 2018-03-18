// Effective modern C++ - Steve Meyers
// Chapter 1 - Deducing types

#ifndef DEDUCINGTYPES_H
#define DEDUCINGTYPES_H

// library
#include <iostream>

// project
#include "analyseexpression.h"

// function
#define IDENTIFIER_NAME(identifier) #identifier

class DeducingTypes
{
public:

    void Test();

private:

//    int * px = & x;
//    int ** ppx = & px;
//    int *** pppx =  & ppx;
//    int **** ppppx =  & pppx;

//    const int * pcx = & cx;


    const std::string X = IDENTIFIER_NAME(x);
    const std::string CX = IDENTIFIER_NAME(cx);
    const std::string RX = IDENTIFIER_NAME(rx);
    const std::string PX = IDENTIFIER_NAME(px);

    // todo: map<macroname, var>;
    // todo function declaration write

    class Case1
    {
    public:
        template<typename T>
        void f1(T& param);

        template<typename T>
        void f2(const T& param);

        template<typename T>
        void f3(T* param);

    private:
        const std::string F1 =  IDENTIFIER_NAME( template<typename T> void f1(T& param));
        const std::string F2 =  IDENTIFIER_NAME( template<typename T> void f2(const T& param));
        const std::string F3 =  IDENTIFIER_NAME( template<typename T> void f3(T* param));
    };

    class Case2
    {
    public:
        template<typename T>
        void f(T&& param);

    private:
        const std::string F =   IDENTIFIER_NAME( template<typename T> void f(T&& param));
    };

    class Case3
    {
    public:
        template<typename T>
        void f(T param);
    private:
        const std::string F =   IDENTIFIER_NAME( template<typename T> void f(T param));
    };

};



#endif // DEDUCINGTYPES_H
