#include <iostream>
#include "division.h"

int main() {
    int x = 10;
    int y = 0;

    try {
        std::cout << "10 / 2 = " << diviser(10, 2) << "\n";
        std::cout << "10 / 0 = " << diviser(x, y) << "\n";
    }
    catch (const std::runtime_error& e) {
        std::cout << e.what() << "\n";
    }

    return 0;
}
