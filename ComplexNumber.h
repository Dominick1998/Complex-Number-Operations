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
