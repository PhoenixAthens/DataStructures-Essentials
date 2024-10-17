#include <iostream>
using std::cout;
using std::swap;

void selectionSort(int* arr, int size){
    for(int i = 0; i< size-1; i++){
        int min = i;
        for(int j = i; j < size; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
}
int main(int argc, char** argv){
    int arr[] = {1,2,3,1,3,2,12};
    int size = 7;
    selectionSort(arr, size);
    for(int i=0;i<size;i++){
        cout << *(arr+i) << " ";
    }
    cout << "\n";
}
