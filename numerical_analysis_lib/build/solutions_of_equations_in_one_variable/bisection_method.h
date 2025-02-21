#ifndef BISECTION_METHOD_H
#define BISECTION_METHOD_H

#include <iostream>
#include <string>

template <typename T>
class bisection_method{
    private:
        long double x1, x2, mid;
        long double error_correction;

        T (*funcPtr)(T);

        long double returnRoot();
        std::string returnSequence();

    public:
        bisection_method(long double x1, long double x2, long double mid, T error_correction, T (*funcPtr)(T)) :
        x1(x1), x2(x2), mid(mid), error_correction(error_correction), funcPtr(funcPtr)
        {}

        //The value of <T> depends on whether the user wishes to view the sequence or just the root.
        T printResult();
};

#endif // BISECTION_METHOD_H