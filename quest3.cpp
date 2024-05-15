#include <iostream>
#include "ComplexNumber.h"

int main() {
    ComplexNumber c1(1.2, 4.3), c2(2.4, 6.1), c3, c4;
    std::cout << "c1 is " << c1 << ", c2 is " << c2 << std::endl;
    c3 = c1;
    std::cout << "c3 is " << c3 << std::endl;
    c3 = c1 + c2;
    std::cout << "Addition of " << c1 << " and " << c2 << " :- " << c3 << std::endl;
    c3 = c1 - c2;
    std::cout << "Subtraction of " << c1 << " and " << c2 << " :- " << c3 << std::endl;
    c3 = c1 * c2;
    std::cout << "Multiplication of " << c1 << " and " << c2 << " :- " << c3 << std::endl;
    c3 = c1 / c2;
    std::cout << "Division of " << c1 << " and " << c2 << " :- " << c3 << std::endl;
    c4 = c3;
    c3 += c1;
    std::cout << "c3 += c1 of " << c4 << " and " << c1 << " :- " << c3 << std::endl;
    c4 = c3;
    c3 -= c2;
    std::cout << "c3 -= c2 of " << c4 << " and " << c2 << " :- " << c3 << std::endl;
    c3 = c4;
    if(c3 == c4) {
        std::cout << "c3 and c4 are equal" << std::endl;
    } else {
        std::cout << "c3 and c4 are not equal" << std::endl;
    }
    std::cout << "Before swapping c1 :- " << c1 << ", c2 :- " << c2 << std::endl;
    c1.swap(c2);
    std::cout << "After swapping c1 :- " << c1 << ", c2 :- " << c2 << std::endl;
    return 0;
}
