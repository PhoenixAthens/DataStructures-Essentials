#include <iostream>
using std::cout;

template <class T>
class Arithmetic{
private:
    T a;
    T b;
public:
    Arithmetic(){
        cout<<"Created an object with uninitialized fields!\n";
    }
    Arithmetic(T a, T b);
    T add();
    T subtract();
    ~Arithmetic();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b):a(a),b(b){
    cout<<"Created Arithmetic object, with a: "<<a<<", b: "<<b<<"\n";
}

template <class T>
T Arithmetic<T>::add(){
    return a + b;
}

template <class T>
T Arithmetic<T>::subtract(){
    return a - b;
}

template <class T>
Arithmetic<T>::~Arithmetic(){
    cout<<"Object Destroyed!!\n";
}

int main(int argc, char** argv){
    Arithmetic<int> a = Arithmetic<int>(23,2);
    cout<<"Addition: "<<a.add()<<"\n";
    cout<<"Subtraction: "<<a.subtract()<<"\n";
    
    Arithmetic<float> b = Arithmetic<float>(2.34,98.12);
    cout<<"Addition: "<<b.add()<<"\n";
    cout<<"Subtraction: "<<b.subtract()<<"\n";
    
    return 0;
}
