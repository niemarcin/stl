#include "arithmeticAverage.hpp"

#include <iostream>

int main() {

    std::vector<int> first{1, 2, 3, 4};
    std::vector<int> second{1, 2, 3};

    try {
        std::cout << ArithmeticAverage(first, second) << "\n";
    }
    catch (std::invalid_argument& ex) {
        std::cout << ex.what() << '\n';
    }

    return 0;
}
