#include <iostream>
using std::cout;
using std::cin;
int main(int argc, char** argv){
    int arr[20] {0};
    for(const auto& a: arr){
        cout<<"Elem: "<<a<<"\n";
    }
    //Elem: 0
    //Elem: 0
    //Elem: 0
    //Elem: 0
    //Elem: 0
    //Elem: 0
    //Elem: 0
    //Elem: 0
    //Elem: 0
    //Elem: 0
    //Elem: 0
    //Elem: 0
    //Elem: 0
    //Elem: 0
    //Elem: 0
    //Elem: 0
    //Elem: 0
    //Elem: 0
    //Elem: 0
    //Elem: 0

    
    int arr2[10]{1};
    int counter{0};
    for(const auto& b: arr2){
        cout<<"Element at "<<(counter++)<<" is "<<b<<"\n";
    }
//    Element at 0 is 1
//    Element at 1 is 0
//    Element at 2 is 0
//    Element at 3 is 0
//    Element at 4 is 0
//    Element at 5 is 0
//    Element at 6 is 0
//    Element at 7 is 0
//    Element at 8 is 0
//    Element at 9 is 0
    
    int arr3[8]{1,2,3};
    for(const auto& c: arr3){
        cout<<c<<"\n";
    }
//    1
//    2
//    3
//    0
//    0
//    0
//    0
//    0
    
    //let's read user input
    int marks[20]{0};
    int numberOfPlaces{0};
    cout<<"Enter the number of students: ";
    cin>>numberOfPlaces;
    for(int i = 0;i<numberOfPlaces;i++){
        cin>>marks[i]; //to this you can either give inputs "one by one" or you can give a spaced list, like so "1 2 3 4 5 6 7 8 9 10"
    }
    for(const int& a: marks){
        cout<<"you got "<<a<<"\n";
    }
    return 0;
}
