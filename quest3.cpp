#include <iostream>
#include "ComplexNumber.h"

int main() {
    // Initialize complex numbers c1 and c2 with specific values, and declare c3 and c4
    ComplexNumber c1(1.2, 4.3), c2(2.4, 6.1), c3, c4;

    // Output initial values of c1 and c2
    std::cout << "c1 is " << c1 << ", c2 is " << c2 << std::endl;

    // Assign c1 to c3 and output the value of c3
    c3 = c1;
    std::cout << "c3 is " << c3 << std::endl;

    // Add c1 and c2, assign the result to c3, and output the result
    c3 = c1 + c2;
    std::cout << "Addition of " << c1 << " and " << c2 << " :- " << c3 << std::endl;

    // Subtract c2 from c1, assign the result to c3, and output the result
    c3 = c1 - c2;
    std::cout << "Subtraction of " << c1 << " and " << c2 << " :- " << c3 << std::endl;

    // Multiply c1 and c2, assign the result to c3, and output the result
    c3 = c1 * c2;
    std::cout << "Multiplication of " << c1 << " and " << c2 << " :- " << c3 << std::endl;

    // Divide c1 by c2, assign the result to c3, and output the result
    c3 = c1 / c2;
    std::cout << "Division of " << c1 << " and " << c2 << " :- " << c3 << std::endl;

    // Assign c3 to c4 and add c1 to c3, output the result
    c4 = c3;
    c3 += c1;
    std::cout << "c3 += c1 of " << c4 << " and " << c1 << " :- " << c3 << std::endl;

    // Assign c3 to c4 and subtract c2 from c3, output the result
    c4 = c3;
    c3 -= c2;
    std::cout << "c3 -= c2 of " << c4 << " and " << c2 << " :- " << c3 << std::endl;

    // Compare c3 and c4 for equality, output the result
    c3 = c4;
    if(c3 == c4) {
        std::cout << "c3 and c4 are equal" << std::endl;
    } else {
        std::cout << "c3 and c4 are not equal" << std::endl;
    }

    // Output the values of c1 and c2 before swapping
    std::cout << "Before swapping c1 :- " << c1 << ", c2 :- " << c2 << std::endl;

    // Swap the values of c1 and c2, then output the new values
    c1.swap(c2);
    std::cout << "After swapping c1 :- " << c1 << ", c2 :- " << c2 << std::endl;

    // End of the program
    return 0;
}
