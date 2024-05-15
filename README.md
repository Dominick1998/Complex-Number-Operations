# Complex Number Operations

## Overview
This project is a C++ program that defines a class `ComplexNumber` and implements various operations on complex numbers. The operations include addition, subtraction, multiplication, and division. The project includes a header file for the class definition, a source file for the class implementation, and a main file with test cases.

## Features
- Define a `ComplexNumber` class with real and imaginary parts.
- Implement default and parameterized constructors, copy constructor, and destructor.
- Overload operators for addition, subtraction, multiplication, division, assignment, and comparison.
- Include methods for setting and getting real and imaginary parts.
- Provide a swap function to exchange values between two complex numbers.
- Test cases in the main file to ensure all operations work correctly.

## File Description
- `ComplexNumber.h`: The header file containing the class definition for `ComplexNumber`.
- `ComplexNumber.cpp`: The source file implementing the methods and operators for `ComplexNumber`.
- `quest3.cpp`: The main file containing test cases for the `ComplexNumber` class.

## How to Run
1. Ensure you have a C++ compiler installed (e.g., g++, clang++).
2. Compile the `ComplexNumber.cpp` and `quest3.cpp` files together:
   ```sh
   g++ ComplexNumber.cpp quest3.cpp -o complex_number_operations
   ```
3. Run the executable:
   ```sh
   ./complex_number_operations
   ```

## Code Structure

### ComplexNumber.h
```cpp
#ifndef COMPLEX_NUMBER_HPP
#define COMPLEX_NUMBER_HPP

#include <iostream>

class ComplexNumber {
public:
    // Constructors and destructor
    ComplexNumber();
    ComplexNumber(const ComplexNumber&);
    ComplexNumber(double, double);
    ~ComplexNumber();

    // Setters and getters
    void setReal(double);
    double getReal() const;
    void setImaginary(double);
    double getImaginary() const;

    // Swap function
    void swap(ComplexNumber&);

    // Operator overloading
    ComplexNumber operator+(const ComplexNumber&);
    ComplexNumber operator-(const ComplexNumber&);
    ComplexNumber operator*(const ComplexNumber&);
    ComplexNumber operator/(const ComplexNumber&);
    ComplexNumber& operator=(const ComplexNumber&);
    ComplexNumber& operator+=(const ComplexNumber&);
    ComplexNumber& operator-=(const ComplexNumber&);
    bool operator==(const ComplexNumber&);
    
    // Print function
    void print_on(std::ostream&);

    // Friend function for output stream
    friend std::ostream& operator<<(std::ostream&, const ComplexNumber&);

private:
    double real, imaginary;
};

#endif
```

### ComplexNumber.cpp
```cpp
#include "ComplexNumber.h"

ComplexNumber::ComplexNumber() : real(0.0), imaginary(0.0) {}

ComplexNumber::ComplexNumber(const ComplexNumber& c) : real(c.getReal()), imaginary(c.getImaginary()) {}

ComplexNumber::ComplexNumber(double r, double i) : real(r), imaginary(i) {}

ComplexNumber::~ComplexNumber() {}

void ComplexNumber::setReal(double r) {
    real = r;
}

double ComplexNumber::getReal() const {
    return real;
}

void ComplexNumber::setImaginary(double i) {
    imaginary = i;
}

double ComplexNumber::getImaginary() const {
    return imaginary;
}

void ComplexNumber::swap(ComplexNumber& c) {
    ComplexNumber temp(c);
    c.setReal(this->getReal());
    c.setImaginary(this->getImaginary());
    this->setReal(temp.getReal());
    this->setImaginary(temp.getImaginary());
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& c) {
    return ComplexNumber(real + c.getReal(), imaginary + c.getImaginary());
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& c) {
    return ComplexNumber(real - c.getReal(), imaginary - c.getImaginary());
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& c) {
    return ComplexNumber(real * c.getReal(), imaginary * c.getImaginary());
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber& c) {
    return ComplexNumber(real / c.getReal(), imaginary / c.getImaginary());
}

ComplexNumber& ComplexNumber::operator=(const ComplexNumber& c) {
    real = c.getReal();
    imaginary = c.getImaginary();
    return *this;
}

ComplexNumber& ComplexNumber::operator+=(const ComplexNumber& c) {
    real += c.getReal();
    imaginary += c.getImaginary();
    return *this;
}

ComplexNumber& ComplexNumber::operator-=(const ComplexNumber& c) {
    real -= c.getReal();
    imaginary -= c.getImaginary();
    return *this;
}

bool ComplexNumber::operator==(const ComplexNumber& c) {
    return real == c.getReal() && imaginary == c.getImaginary();
}

void ComplexNumber::print_on(std::ostream& ostr) {
    ostr << *this;
}

std::ostream& operator<<(std::ostream& ostr, const ComplexNumber& c) {
    ostr << "Complex(" << c.getReal() << ", " << c.getImaginary() << ")";
    return ostr;
}
```

### quest3.cpp
```cpp
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
```

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Author
**Dominick Ferro**

## Date
October 15, 2023

---
