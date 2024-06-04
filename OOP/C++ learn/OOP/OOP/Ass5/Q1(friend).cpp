/*
Complex number: 4.7 + 6.8i
*/

// Friend Function
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    void display() {
        cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }

    // Declaring the friend function
    friend Complex operator+(const Complex& c1, const Complex& c2);
};

// Defining the friend function outside the class
Complex operator+(const Complex& c1, const Complex& c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.2, 4.3);
    Complex result = c1 + c2; // using the friend function to add two Complex numbers
    result.display();
    return 0;
}

