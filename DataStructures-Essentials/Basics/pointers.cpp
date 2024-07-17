#include <iostream>
#include <format>
using std::cout;
using std::format;
using std::cin;

struct Rectangle{
    int length;
    int breadth;
    char type;
};

int main(int argc, char** argv){
    int arr[5] = {1, 2, 3, 4, 5};
    int* p = arr;
    int* p2 = &arr[0]; //[] when used with arrays is similar to pointer deference operator used on a pointer
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
        cout<<"At address "<< p+i << "we have "<< *(p2+i)<<"\n";
    }
    int* p3 = (int*)malloc(sizeof(int)*10);
    for(int i=0;i<10;i++){
        cin >> *(p3+i);
    }
    //same thing as above
    int* p4 = new int[10];
    for(int i=0;i<10;i++){
        cin >> *(p4+i);
    }
    for(int i = 0; i< 10;i++){
        cout<<"Value at "<<i<<" in p3: "<<*(p3+i)<<"\n";
        cout<<"Value at "<<i<<" in p4: "<<*(p4+i)<<"\n";
    }
    delete []p4; // if it was declared with the array syntax, the '[]' are necessary
    delete p3;
    
    //we can also do the following
    // free(p4);
    // free(p3);
    
    int* integerPointer;
    float* floatingPoint;
    char* characterPointer;
    double* doublePointer;
    struct Rectangle* structurePointer;
    
    cout<<sizeof(integerPointer)<<"\n"; //8
    cout<<sizeof(floatingPoint)<<"\n"; //8
    cout<<sizeof(characterPointer)<<"\n"; //8
    cout<<sizeof(doublePointer)<<"\n"; //8
    cout<<sizeof(structurePointer)<<"\n"; //8
    //Pointer are independent of the data-types, this is because pointer are dependent on the CPU architecture
    //64-bit CPU = 8 byte pointers
    //32-bit CPU = 4 byte pointers
    
    return 0;
}
