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

struct Rect{
    int length;
    int breadth;
};

//we cannot pass an array by value, it's always passed by address
//but if we enclose it inside a struct, then we CAN pass an array by value,
//like so
struct arrayByValue{
    int size;
    int arr[];
};
//you must declare a struct that has an array as data member like it's shown above, we cannot do the following:
/*
struct array{
    int arr[];
    int size;
}
 */
//it results in an error like so:
//Flexible array member 'arr' with type 'int[]' is not at the end of struct

int* createArray(int size){
    //C style
    int *p = (int*)malloc(sizeof(int)*size);
    
    //C++ style
    int *p2 = new int[size];
    
    return p2;
}

//passing a struct by value will result in a copy of the passed struct being created in the memory
void structByValue(struct Rect rect){
    cout<<"Length: "<<rect.length<<", Breadth: "<<rect.breadth<<"\n";
}

//this will create a pointer to the original struct in memory
void structByAddress(struct Rect* r){
    cout<<"Length: "<<r->length<<", Breadth: "<<r->breadth<<"\n";
}

void structByReference(struct Rect& r){
    r.length=100;
    r.breadth=200;
    cout<<"Length: "<<r.length<<", Breadth: "<<r.breadth<<"\n";
}

void arrayByValue_Demo(struct arrayByValue a){
    
    for(int i=0;i< a.size;i++){
        a.arr[i]+=14;
    }
}
void arrayByValue_demo2(struct arrayByValue* a){
    for(int i=0;i< a->size;i++){
        a->arr[i]+=14;
    }
}

struct Rect* createRect(){
    struct Rect* r;
    r = new Rect;
    r->length=23;
    r->breadth=5.4;
    return r;
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
    
    struct Rect r {23, 12};
    structByAddress(&r); //this is how a struct can be passed by address!
    struct Rect* r2 = (struct Rect*)malloc(sizeof(struct Rect));
    structByAddress(r2);
    
    //calling struct by reference
    structByReference(r);
    structByReference(*r2);
    
    cout << "Length: "<<r.length<<", Breadth: "<<r.breadth<<"\n";
    cout << "Length: "<<r2->length<<", Breadth: "<<r2->breadth<<"\n";
    
    struct arrayByValue arrByV;
    arrByV.arr[0]=23;
    arrByV.arr[1]=11;
    arrByV.arr[2]=90;
    arrByV.arr[3]=101;
    arrByV.arr[4]=34;
    arrByV.size=5;
    arrayByValue_Demo(arrByV);
    for(int i=0;i< arrByV.size;i++){
        cout<<arrByV.arr[i]<<" ";
    }
    //23 11 90 101 34
    cout<<"\n";
    
    arrayByValue_demo2(&arrByV);
    for(int i=0;i< arrByV.size;i++){
        cout<<arrByV.arr[i]<<" ";
    }
    //37 25 104 115 48 
    cout<<"\n";
    
    //using struct created by function "createRect()"
    struct Rect* rectPtr = createRect();
    cout << "Length: "<<rectPtr->length<<", Breadth: "<<rectPtr->breadth<<"\n"; //Length: 23, Breadth: 5
    
    return 0;
}
