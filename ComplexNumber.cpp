#include "ComplexNumber.h"

// Default constructor initializes the real and imaginary parts to 0.0
ComplexNumber::ComplexNumber() : real(0.0), imaginary(0.0) {}

// Copy constructor initializes the object with the values from another ComplexNumber object
ComplexNumber::ComplexNumber(const ComplexNumber& c) : real(c.getReal()), imaginary(c.getImaginary()) {}

// Parameterized constructor initializes the real and imaginary parts with provided values
ComplexNumber::ComplexNumber(double r, double i) : real(r), imaginary(i) {}

// Destructor for the ComplexNumber class
ComplexNumber::~ComplexNumber() {}

// Setter for the real part of the complex number
void ComplexNumber::setReal(double r) {
    real = r;
}

// Getter for the real part of the complex number
double ComplexNumber::getReal() const {
    return real;
}

// Setter for the imaginary part of the complex number
void ComplexNumber::setImaginary(double i) {
    imaginary = i;
}

// Getter for the imaginary part of the complex number
double ComplexNumber::getImaginary() const {
    return imaginary;
}

// Swaps the values of this complex number with another complex number
void ComplexNumber::swap(ComplexNumber& c) {
    ComplexNumber temp(c);
    c.setReal(this->getReal());
    c.setImaginary(this->getImaginary());
    this->setReal(temp.getReal());
    this->setImaginary(temp.getImaginary());
}

// Overloads the + operator to add two complex numbers
ComplexNumber ComplexNumber::operator+(const ComplexNumber& c) {
    return ComplexNumber(real + c.getReal(), imaginary + c.getImaginary());
}

// Overloads the - operator to subtract one complex number from another
ComplexNumber ComplexNumber::operator-(const ComplexNumber& c) {
    return ComplexNumber(real - c.getReal(), imaginary - c.getImaginary());
}

// Overloads the * operator to multiply two complex numbers
ComplexNumber ComplexNumber::operator*(const ComplexNumber& c) {
    return ComplexNumber(real * c.getReal(), imaginary * c.getImaginary());
}

// Overloads the / operator to divide one complex number by another
ComplexNumber ComplexNumber::operator/(const ComplexNumber& c) {
    return ComplexNumber(real / c.getReal(), imaginary / c.getImaginary());
}

// Overloads the = operator for assignment
ComplexNumber& ComplexNumber::operator=(const ComplexNumber& c) {
    real = c.getReal();
    imaginary = c.getImaginary();
    return *this;
}

// Overloads the += operator to add another complex number to this complex number
ComplexNumber& ComplexNumber::operator+=(const ComplexNumber& c) {
    real += c.getReal();
    imaginary += c.getImaginary();
    return *this;
}

// Overloads the -= operator to subtract another complex number from this complex number
ComplexNumber& ComplexNumber::operator-=(const ComplexNumber& c) {
    real -= c.getReal();
    imaginary -= c.getImaginary();
    return *this;
}

// Overloads the == operator to compare two complex numbers for equality
bool ComplexNumber::operator==(const ComplexNumber& c) {
    return real == c.getReal() && imaginary == c.getImaginary();
}

// Outputs the complex number to the provided output stream
void ComplexNumber::print_on(std::ostream& ostr) {
    ostr << *this;
}

// Friend function to overload the << operator for outputting complex numbers
std::ostream& operator<<(std::ostream& ostr, const ComplexNumber& c) {
    ostr << "Complex(" << c.getReal() << ", " << c.getImaginary() << ")";
    return ostr;
}
