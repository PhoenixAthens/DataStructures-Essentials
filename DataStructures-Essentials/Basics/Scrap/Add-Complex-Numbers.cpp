#include <iostream>
using namespace std;

class complex {
    private:
        float real;
        float imag;
    
    public:
        void getdata() {
            cout << "Enter real part: ";
            cin >> real;
            cout << "Enter imaginary part: ";
            cin >> imag;
        }
        
        void show() {
            cout << real << " + " << imag << "i" << endl;
        }
        
        void sum(complex c1, complex c2) {
            real = c1.real + c2.real;
            imag = c1.imag + c2.imag;
        }
};

int main() {
    complex c1, c2, c3;
    cout << "Enter first complex number:\n";
    c1.getdata();
    cout << "Enter second complex number:\n";
    c2.getdata();
    c3.sum(c1, c2);
    cout << "\nThe sum of the two complex numbers is: ";
    c3.show();
    return 0;
}
