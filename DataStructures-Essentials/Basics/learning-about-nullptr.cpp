#include <iostream>
#include <functional>
using std::function;

typedef int (*FPnOp)(int,int);

int add(int a, int b){
    return a+b;
}
int multi(int a, int b){
    return a*b;
}
int main(int argc, char** argv){
    int* x = nullptr;
    //*x = 23;
    /*
     Thread 1: EXC_BAD_ACCESS (code=1, address=0x0)
     */
    
    //but if we do the following:
    x = new int(23);
    std::cout << "The value of x is: "<<*x<<"!"<<"\n";
    //The value of x is: 23!
    
    int* arr[10];
    for(int i=0;i<10;i++)arr[i]=nullptr;
    
    arr[0]=new int(34);
    std::cout << "The value of x is: "<<**arr<<"!"<<"\n";
    //The value of x is: 34!
    std::cout << "The value of x is: "<<*arr<<"!"<<"\n";
    //The value of x is: 0x6000027500a0! (because the array stores int-pointers and by using *arr we are accessing its elements, but by using
    //**arr, we are accessing the element stored at address pointed to by address stored at index 0 in the array.
    
    //function pointer
    int (*op)(int,int);
    op = add;
    FPnOp fnOP;
    fnOP = multi;
    
    std::cout << op(2,9)<<"\n"; //11
    std::cout << fnOP(2,9)<<"\n"; //11
    
    function<int(int,int)> functionPointer;
    functionPointer = add;
    std::cout << functionPointer(2,9)<<"\n"; //11
    
    return 0;
}
