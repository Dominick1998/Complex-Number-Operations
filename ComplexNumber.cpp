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
