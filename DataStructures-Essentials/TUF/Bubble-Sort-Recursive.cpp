#include <iostream>
void bubbleSort(int* arr, int size){
    if(size==1)return;
    int swaps = 0;
    for(int i=0;i<size-1;i++){
        if(*(arr+i)>*(arr+i+1)){
            swaps++;
            int temp = *(arr+i);
            *(arr+i) = *(arr+i+1);
            *(arr+i+1) = temp;
        }
    }
    if(swaps==0)return;
    bubbleSort(arr,size-1);
}
int main(int argc, char** argv){
    int arr[] = {3,1,2,4,1,5,2,6,4};
    bubbleSort(arr, 9);
    for(int i: arr){
        std::cout << i << " ";
    }
    std::cout << "\n";
}
