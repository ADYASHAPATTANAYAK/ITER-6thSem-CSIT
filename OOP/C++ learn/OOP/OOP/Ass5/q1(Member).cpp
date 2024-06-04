/*
Complex number: 4.7 + 6.8i
*/

// Member function

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    // Overloading the + operator to add two Complex objects
    Complex operator+(const Complex& c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.2, 4.3);
    Complex result = c1 + c2; // using the overloaded + operator
    result.display();
    return 0;
}
