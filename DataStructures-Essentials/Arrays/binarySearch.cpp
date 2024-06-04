#include <iostream>
using std::cout;
using std::cin;
int binarySearch(int*, int, int);
int main(int argc, char** argv){
    int element[] = {10,20,30,40,50,60,70,80,90,100};
    int element2[] = {10,20,30,40,50,60,70,80,90};
    int valueToLookFor;
    cout<<"Enter the value you are looking for: ";
    cin>>valueToLookFor;
    int foundAt = binarySearch(element, 10, valueToLookFor);
    if(foundAt != -1){
        cout<<"Element found at: "<<foundAt<<"\n";
    }else{
        cout<<"Element not found\n";
    }
    
    cout<<"Enter the value you are looking for: ";
    cin>>valueToLookFor;
    
    foundAt = binarySearch(element2, 9, valueToLookFor);
    if(foundAt != -1){
        cout<<"Element found at: "<<foundAt<<"\n";
    }else{
        cout<<"Element not found\n";
    }
    
    
}
int binarySearch(int* arr, int size, int key){
    int start = 0;
    int end = size;
    int mid = (start+end)/2;
    while(start<end){
        if(*(arr+mid)==key)return mid;
        else{
            if( *(arr+mid) < key )start = mid+1;
            else end = mid-1;
            mid = (start+end)/2;
        }
    }
    return -1;
}
