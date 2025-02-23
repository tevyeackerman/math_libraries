#ifndef BISECTION_METHOD_H
#define BISECTION_METHOD_H

#include <iostream>
#include <string>
#include <map>
#include <cmath>
#include <stdexcept>

template <typename T>
class bisection_method {
private:
    long double x1, x2;
    long double error_correction;
    long double (*funcPtr)(long double);

    long double returnRoot();
    void printSequence(const std::map<int, std::string>& sequenceResults);

public:
    bisection_method(long double x1, long double x2, long double error_correction, long double (*funcPtr)(long double))
        : x1(x1), x2(x2), error_correction(error_correction), funcPtr(funcPtr) {}

    void printResult();
};

#endif // BISECTION_METHOD_H