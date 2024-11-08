#include <iostream>
using namespace std;

class Base2;

class Base1 {
    friend class Base2;

public:
    int publicData1;
protected:
    int protectedData1;
private:
    int privateData1;

public:
    Base1() : publicData1(10), protectedData1(20), privateData1(30) {}
};

class Base2 {
public:
    int publicData2;
protected:
    int protectedData2;
private:
    int privateData2;

public:
    Base2() : publicData2(40), protectedData2(50), privateData2(60) {}
    void displayBase1Data(Base1& b1) {
        cout << "Accessing Base1's data from Base2 (using friendship):" << endl;
        cout << "Base1::publicData1 = " << b1.publicData1 << endl;
        cout << "Base1::protectedData1 = " << b1.protectedData1 << endl;
        cout << "Base1::privateData1 = " << b1.privateData1 << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void displayData() {
        cout << "Accessing public data from Base1 and Base2:" << endl;
        cout << "Base1::publicData1 = " << publicData1 << endl;
        cout << "Base2::publicData2 = " << publicData2 << endl;

        cout << "Accessing protected data from Base1 and Base2:" << endl;
        cout << "Base1::protectedData1 = " << protectedData1 << endl;
        cout << "Base2::protectedData2 = " << protectedData2 << endl;

        // The following lines would cause an error if uncommented:
        // cout << "Base1::privateData1 = " << privateData1 << endl;
        // cout << "Base2::privateData2 = " << privateData2 << endl;
    }
};

int main() {
    Base1 base1Obj;
    Base2 base2Obj;
    Derived derivedObj;

    cout << "From Base2, accessing Base1's data (using friendship):" << endl;
    base2Obj.displayBase1Data(base1Obj);

    cout << "\nFrom Derived class, accessing Base1 and Base2's data:" << endl;
    derivedObj.displayData();

    return 0;
}
