#include <iostream>
using namespace std;

class Complex {
    int real;
    int imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(int value) : real(value), imag(value) {}
    Complex(int r, int i) : real(r), imag(i) {}
    friend Complex& addComplex(const Complex &c1, const Complex &c2, Complex &result);
    friend void display(const Complex &c);
};

Complex& addComplex(const Complex &c1, const Complex &c2, Complex &result) {
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

void display(const Complex &c) {
    cout << c.real << " + " << c.imag << "i" << endl;
}

int main() {
    Complex c1(1, 8);
    Complex c2(9);
    Complex result;
    addComplex(c1, c2, result);
    cout << "The sum of the complex numbers is: ";
    display(result);
    return 0;
}
