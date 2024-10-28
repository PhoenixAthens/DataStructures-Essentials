#include <iostream>
using std::cout;
using std::cin;
using std::swap;
void SelectionSort(int* arr, int start, int size){
    if(start==size-1)return;
    int smallestElemtIndex = start;
    for(int i=start+1;i<size;i++){
        if(*(arr+i)<arr[smallestElemtIndex]){
            smallestElemtIndex = i;
        }
    }
    swap(arr[start],arr[smallestElemtIndex]);
    SelectionSort(arr, start+1, size);
}
int main(int argc, char** argv){
    int arr[] = {3,1,2,4,1,5,2,6,4};
    SelectionSort(arr, 0, 9);
    for(int i: arr){
        cout << i << " ";
    }
    cout << "\n";
}
