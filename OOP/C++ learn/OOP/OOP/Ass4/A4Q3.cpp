#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Constructors
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Friend functions for operations
    friend Complex operator+(const Complex& c1, const Complex& c2);
    friend Complex operator-(const Complex& c1, const Complex& c2);
    friend Complex operator*(const Complex& c1, const Complex& c2);
    friend Complex operator/(const Complex& c1, const Complex& c2);

    // Display function
    void display() const {
        std::cout << real << " + " << imag << "i";
    }
};

// Addition
Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

// Subtraction
Complex operator-(const Complex& c1, const Complex& c2) {
    return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

// Multiplication
Complex operator*(const Complex& c1, const Complex& c2) {
    return Complex(c1.real * c2.real - c1.imag * c2.imag,
                   c1.real * c2.imag + c1.imag * c2.real);
}

// Division
Complex operator/(const Complex& c1, const Complex& c2) {
    double denominator = c2.real * c2.real + c2.imag * c2.imag;
    return Complex((c1.real * c2.real + c1.imag * c2.imag) / denominator,
                   (c1.imag * c2.real - c1.real * c2.imag) / denominator);
}

int main() {
    // Initialize complex numbers
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);

    // Addition
    Complex sum = c1 + c2;
    std::cout << "Sum: ";
    sum.display();
    std::cout << std::endl;

    // Subtraction
    Complex diff = c1 - c2;
    std::cout << "Difference: ";
    diff.display();
    std::cout << std::endl;

    // Multiplication
    Complex product = c1 * c2;
    std::cout << "Product: ";
    product.display();
    std::cout << std::endl;

    // Division
    Complex quotient = c1 / c2;
    std::cout << "Quotient: ";
    quotient.display();
    std::cout << std::endl;

    return 0;
}
