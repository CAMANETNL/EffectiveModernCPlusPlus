#ifndef VARIABLE_H
#define VARIABLE_H

// library
#include <iostream>

class Variable
{

public:

    template <class T>
    static void describe(T & expression)
    {
        std::cout << "var at address  [" << & expression << "] = " << expression << std::endl;
    }

    template <class T>
    static void describe(T * expression)
    {
        std::cout << "var at address [" << & expression << "] --> memory [" << expression << "] = " << * expression << std::endl;
        describe(*expression);
    }
};

#endif // VARIABLE_H
