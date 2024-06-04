#include <iostream>
using std::cout;
void printAllPairs(int*, int);

int main(int argc, char** argv){
    int arr[]{10,20,30,40,50,60};
    int arr2[]{10,20,30,40,50};
    printAllPairs(arr,sizeof(arr)/sizeof(int));
    cout<<"**<>==========================================================<>**\n";
    printAllPairs(arr2,sizeof(arr2)/sizeof(int));
    
}
void printAllPairs(int* arr, int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            cout<<"( "<< *(arr+i)<< ","<< *(arr+j) <<" )"<<"\n";
        }
    }
}
