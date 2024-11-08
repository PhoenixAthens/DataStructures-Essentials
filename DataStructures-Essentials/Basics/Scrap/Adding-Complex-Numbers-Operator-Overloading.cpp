#include <iostream>
using namespace std;
class Complex {
    int real;
    int imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex &other) {
        return Complex(real + other.real, imag + other.imag);
    }
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(5, 6);
    Complex result = c1 + c2;
    cout << "Result (using member function): ";
    result.display();
    return 0;
}

