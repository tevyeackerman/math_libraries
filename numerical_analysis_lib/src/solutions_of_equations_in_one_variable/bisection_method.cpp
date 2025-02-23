#include "../../build/solutions_of_equations_in_one_variable/bisection_method.h"

template <typename T>
long double bisection_method<T>::returnRoot() {
    if (funcPtr(x1) * funcPtr(x2) >= 0) {
        throw std::invalid_argument("Function values at x1 and x2 must have opposite signs.");
    }

    long double mid;
    std::map<int, std::string> sequenceResults;
    int sequence_number = 1;

    while (std::abs(x2 - x1) > error_correction) {
        mid = (x1 + x2) / 2;
        long double yRESULT = funcPtr(mid);

        sequenceResults[sequence_number] = "x1:" + std::to_string(x1) + " x2:" + std::to_string(x2) + " mid:" + std::to_string(mid);

        if (yRESULT * funcPtr(x1) < 0) {
            x2 = mid;
        } else {
            x1 = mid;
        }

        sequence_number++;
    }

    printSequence(sequenceResults);
    return mid;
}

template <typename T>
void bisection_method<T>::printSequence(const std::map<int, std::string>& sequenceResults) {
    for (const auto& info : sequenceResults) {
        std::cout << info.second << std::endl;
    }
}

template <typename T>
void bisection_method<T>::printResult() {
    char input;

    std::cout << "Print result? [Y/n]: ";
    std::cin >> input;
    if (input == 'Y' || input == 'y') {
        std::cout << "RESULT: " << returnRoot() << std::endl;
    }

    std::cout << "Print sequence? [Y/n]: ";
    std::cin >> input;
    if (input == 'Y' || input == 'y') {
        std::cout << "BISECTION SEQUENCE: " << std::endl;
        returnRoot(); // This will print the sequence
    }
}
template <typename T>
long double bisection_method<T>::returnRoot() {
    if (funcPtr(x1) * funcPtr(x2) >= 0) {
        throw std::invalid_argument("Function values at x1 and x2 must have opposite signs.");
    }

    long double mid;
    std::map<int, std::string> sequenceResults;
    int sequence_number = 1;

    while (std::abs(x2 - x1) > error_correction) {
        mid = (x1 + x2) / 2;
        long double yRESULT = funcPtr(mid);

        sequenceResults[sequence_number] = "x1:" + std::to_string(x1) + " x2:" + std::to_string(x2) + " mid:" + std::to_string(mid);

        if (yRESULT * funcPtr(x1) < 0) {
            x2 = mid;
        } else {
            x1 = mid;
        }

        sequence_number++;
    }

    printSequence(sequenceResults);
    return mid;
}

template <typename T>
void bisection_method<T>::printSequence(const std::map<int, std::string>& sequenceResults) {
    for (const auto& info : sequenceResults) {
        std::cout << info.second << std::endl;
    }
}

template <typename T>
void bisection_method<T>::printResult() {
    char input;

    std::cout << "Print result? [Y/n]: ";
    std::cin >> input;
    if (input == 'Y' || input == 'y') {
        std::cout << "RESULT: " << returnRoot() << std::endl;
    }

    std::cout << "Print sequence? [Y/n]: ";
    std::cin >> input;
    if (input == 'Y' || input == 'y') {
        std::cout << "BISECTION SEQUENCE: " << std::endl;
        returnRoot(); // This will print the sequence
    }
}

template <typename T>
long double bisection_method<T>::returnRoot() {
    if (funcPtr(x1) * funcPtr(x2) >= 0) {
        throw std::invalid_argument("Function values at x1 and x2 must have opposite signs.");
    }

    long double mid;
    std::map<int, std::string> sequenceResults;
    int sequence_number = 1;

    while (std::abs(x2 - x1) > error_correction) {
        mid = (x1 + x2) / 2;
        long double yRESULT = funcPtr(mid);

        sequenceResults[sequence_number] = "x1:" + std::to_string(x1) + " x2:" + std::to_string(x2) + " mid:" + std::to_string(mid);

        if (yRESULT * funcPtr(x1) < 0) {
            x2 = mid;
        } else {
            x1 = mid;
        }

        sequence_number++;
    }

    printSequence(sequenceResults);
    return mid;
}

template <typename T>
void bisection_method<T>::printSequence(const std::map<int, std::string>& sequenceResults) {
    for (const auto& info : sequenceResults) {
        std::cout << info.second << std::endl;
    }
}

template <typename T>
void bisection_method<T>::printResult() {
    char input;

    std::cout << "Print result? [Y/n]: ";
    std::cin >> input;
    if (input == 'Y' || input == 'y') {
        std::cout << "RESULT: " << returnRoot() << std::endl;
    }

    std::cout << "Print sequence? [Y/n]: ";
    std::cin >> input;
    if (input == 'Y' || input == 'y') {
        std::cout << "BISECTION SEQUENCE: " << std::endl;
        returnRoot(); // This will print the sequence
    }
}