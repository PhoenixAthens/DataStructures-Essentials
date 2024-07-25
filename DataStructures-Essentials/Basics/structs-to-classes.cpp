#include <iostream>
using std::cout;

class Rectangle{
private:
    int length;
    int breadth;
public:
    Rectangle(int l, int b);
    ~Rectangle();
    int calculateArea();
    void changeLength(int newLength);
    void changeBreadth(int newBreadth);
    
};
Rectangle::Rectangle(int l, int b):length(l),breadth(b){
    cout<<"Rectange object with length "<<l<<", and breadth "<<b<<" created!\n";
}
Rectangle::~Rectangle(){
    cout<<"Destroying the Rectangle object!!\n";
}
int Rectangle::calculateArea(){
    return this->length*this->breadth;
}
void Rectangle::changeLength(int newLength){
    this->length=newLength;
}
void Rectangle::changeBreadth(int newBreadth){
    this->breadth=newBreadth;
}
int main(int argc, char** argv){
    Rectangle r1 = Rectangle(22, 101);
    cout<<"Aread of rectange: "<<r1.calculateArea()<<"\n";
}
    //Rectange object with length 22, and breadth 101 created!
    //Aread of rectange: 2222
    //Destroying the Rectangle object!!
