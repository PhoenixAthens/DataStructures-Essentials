#include <iostream>
using std::cout;
using std::cin;

struct Rect{
    int length;
    int breadth;
};
void initialize(struct Rect* r, int l, int b){
    r->length = l;
    r->breadth = b;
}
int area(struct Rect* r){
    //don't change values in here
    return r->length*r->breadth;
}
void changeLength(struct Rect* r, int length){
    r->length=length;
}
void changeBreadth(struct Rect* r, int breadth){
    r->breadth=breadth;
}
int main(int argc, char** argv){
    struct Rect r1;
    initialize(&r1, 23, 34);
    cout<<"Length: "<<r1.length<<", Breadth: "<<r1.breadth<<"\n";
    cout << "Area of rectange r1 is "<<area(&r1)<<"\n";
    changeLength(&r1, 32);
    changeBreadth(&r1, 43);
    cout<<"Length: "<<r1.length<<", Breadth: "<<r1.breadth<<"\n";
    
    //Length: 23, Breadth: 34
    //Area of rectange r1 is 782
    //Length: 32, Breadth: 43
}
