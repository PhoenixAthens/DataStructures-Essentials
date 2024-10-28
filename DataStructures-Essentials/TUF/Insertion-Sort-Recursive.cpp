#include <iostream>
using std::cout;
using std::cin;
using std::swap;
void insertionSort(int* arr, int high, int size){
    if(high==size)return;
    int j = high;
    while(j>0 && *(arr+j-1)>*(arr+j)){
        int temp = *(arr+j-1);
        *(arr+j-1)=*(arr+j);
        *(arr+j)=temp;
        j--;
    }
    insertionSort(arr,high+1,size);
}
int main(int argc, char** argv){
    int arr[] = {3,1,2,4,1,5,2,6,4};
    insertionSort(arr,1,9);
    for(int i: arr){
        cout << i << " ";
    }
    cout <<"\n";
}
