#include <iostream>
#include <format>
using std::format;
using std::cout;
using std::endl;
using std::swap;
void subArrayPrinter(int* arr, int size){
    for(int i = 0;i <size;i++){
        for(int j = i;j<size;j++){
            for(int k = i; k<=j;k++){
                cout<<format("{}, ",arr[k]);
            }
            cout<<endl;
        }
    }
}
int main(int argc, char** argv){
    int arr[] {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    subArrayPrinter(arr, size);
    
    int a = 23;
    int b = 89;
    cout<<format("a: {}, b: {}.\n",a,b); //a: 23, b: 89.
    swap(a,b);
    cout<<format("a: {}, b: {}.\n",a,b); //a: 89, b: 23.
    //swapping using xor
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<format("a: {}, b: {}.\n",a,b); //a: 23, b: 89.
    
    int arr[10000000]; //10_000_000
    int arr[1000000000]; //1_000_000_000
    
    return 0;
}
