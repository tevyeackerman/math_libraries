#include "../../build/solutions_of_equations_in_one_variable/bisection_method.h"

#include <iostream>
#include <string>
#include <cmath>
#include <map>

template<typename T>
bisection_method<T>::bisection_method(long double x1, long double x2, long double mid, T error_correction, T (*funcPtr)(T)):
x1(x1), x2(x2), mid(mid), error_correction(error_correction), funcPtr(funcPtr)
{}

template<typename T>
T bisection_method<T>::printResult(){
    char input;

    std::cout << "Print result?[Y/n]:";
    std::cin >> input;
    if(input == 'Y' || input == '\n') std::cout << "RESULT: "<< returnRoot() << std::endl;

    std::cout << "Print sequence?[Y/n]:";
    std::cin >> input;
    if(input == 'Y' || input == '\n') std::cout << "BISECTION SEQUENCE: " << returnSequence() << std::endl;
}

template<typename T>
long double bisection_method<T>::returnRoot(){
    long double yRESULT = 0.00, y1, y2;
    y1 = funcPtr(x1);
    y2 = funcPtr(x2);

    std::map<int, std::string> sequenceResults;
    int sequence_number = 1;
    std::string resultsInfo;

    while(error_correction < std::abs(yRESULT * 100)){
        mid = (x1 + x2)/2;
        yRESULT = funcPtr(mid);

        resultsInfo = "x1:" + std::to_string(x1) + " x2:" + std::to_string(x2) + " mid:" + std::to_string(mid);
        sequenceResults[sequence_number] = resultsInfo;

        if((yRESULT * y1) < 0) x2 = mid;

        else x1 = mid;

        sequence_number++;
    }

    returnSequence(sequenceResults);
    return yRESULT;
}

template<typename T>
void bisection_method<T>::returnSequence(std::map<int, std::string> sequenceResults){
    for(const auto info : sequenceResults){
        std::cout<<sequenceResults[info];
    }
}

