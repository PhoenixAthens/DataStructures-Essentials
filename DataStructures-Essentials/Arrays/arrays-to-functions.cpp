#include <iostream>
#include <type_traits>
using std::cout;

void printArray(int[]);
void printArray_2(int&);
void printArray_3(auto);
void printArray_4(auto&);
void printArray_5(int*&);
int main(int argc, char** argv){
    int arr[10]{1,2,3,4,5,6,7,8,9,10};
    for(int i = 0; i<10;i++){
        cout<<"Elem at "<<i<<" is "<<arr[i]<<"\n";
    }
    printArray(arr); //Size of arr is 2, since when we pass an array like this, we are basically passing the value stored in arr, i.e. the address of the first-element of array, which on our 64-bit machine will have a size of 8 bytes, and 8/4 (4 being the size of int), gives us 2
    printArray_2(*arr); //this is equivalent to passing arr[0] to printArray_2
    
    printArray_3(arr);
    
    printArray_4(arr);
    
    //printArray_5(arr);
    return 0;
}

void printArray(int arr[]){
    int size = sizeof(arr)/sizeof(int); //'sizeof (arr)' will return the size of the pointer, not the array itself
    cout<<"Size of arr is "<<size<<"\n";
}

void printArray_2(int& arr){
    int size = sizeof(arr)/sizeof(int); //Size of arr is 1
    cout<<"Size of arr is "<<size<<"\n";
}

void printArray_3(auto arr){ //here auto will eventually be interpreted as int*
    int size = sizeof(arr)/sizeof(int); //Size of arr is 2
    cout<<"Size of arr is "<<size<<"\n";
}

void printArray_4(auto& arr){ //here we are creating an alias to the arr array, meaning both parameter and array passed as argument point to the same contiguous block of memory
    int size = sizeof(arr)/sizeof(int); //Size of arr is 10
    cout<<typeid(arr).name()<<"\n"; //A10_i,
    //what does A10_i mean?
    //
    
    
    cout<<"Size of arr is "<<size<<"\n";
}

void printArray_5(int*& arr){ //this is not the same as 'printArray_4'
    int size = sizeof(arr)/sizeof(int);
    cout<<"Size of arr is "<<size<<"\n";
}
//when we pass an array as shown with `printArray` function, we are passing it by reference, meaning we are passing the memory address of the first element of
//the array to `printArray` function,
