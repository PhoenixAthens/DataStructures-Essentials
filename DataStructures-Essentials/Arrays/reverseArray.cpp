#include <iostream>
using std::cout;
void reverseArray(int* arr, int size){
    int end = size-1;
    for(int i = 0;i<size/2;i++){
        int lastElem = *(arr+end);
        *(arr+end) = *(arr+i);
        *(arr+i) = lastElem;
        end--;
    }
}
void reverseArray_2(int* arr, int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        int startElem = *(arr+start);
        *(arr+start) = *(arr+end);
        *(arr+end) = startElem;
        start++;
        end--;
    }
}
int main(int argc, char** argv){
    int arr[]{10,20,30,40,50,60,70,80,90};
    reverseArray(arr,sizeof(arr)/sizeof(int));
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<"\n";
    //90 80 70 60 50 40 30 20 10
    
    int arr2[]{10,20,30,40,50,60,70,80,90,100};
    reverseArray(arr2,sizeof(arr2)/sizeof(int));
    for(int i:arr2){
        cout<<i<<" ";
    }
    cout<<"\n";
    //100 90 80 70 60 50 40 30 20 10 
    
    reverseArray(arr,sizeof(arr)/sizeof(int));
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<"\n";
    //10 20 30 40 50 60 70 80 90
    
    reverseArray(arr2,sizeof(arr2)/sizeof(int));
    for(int i:arr2){
        cout<<i<<" ";
    }
    cout<<"\n";
    //10 20 30 40 50 60 70 80 90 100
    
    return 0;
}
