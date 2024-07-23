#include <iostream>
using std::cout;
using std::cin;
using std::string;
//passing parameters like this results in function inlining,
//a new activation record will not be created in the call stack for swapper once it's called
//since all its params are passed by reference from 'main', the swapper function will simply be inlined into main!
//checkout: https://www.udemy.com/course/datastructurescncpp/learn/lecture/13612090#overview
void swapper(int&a, int& b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
int main(int argc, char** argv){
    int a, b;
    string str;
    
    //can't do the following
    //cin.getline(str,23);
    
    //can do this
    cin >> a >> b;
    cout << "Before swap, a: "<<a<<", b: "<<b<<"\n"; //Before swap, a: 12, b: 108
    swapper(a,b);
    cout << "After swap, a: "<< a<<", b: "<<b<<"\n"; //After swap, a: 108, b: 12
    return 0;
}
