#include <iostream>
using std::cout;
int findLowerBound(int* arr, int size, int target){
    int lower = 0;
    int upper = size-1;
    int mid;
    int ans = -1;
    while(lower<=upper){
        mid = lower + (upper-lower)/2;
        if( *(arr+mid) == target ){
            return *(arr+mid);
        }else if(*(arr+mid)>target){
            ans = *(arr+mid);
            upper = mid-1;
        }else{
            lower = mid+1;
        }
    }
    return ans;
}
int findLowerBound_2(int* arr, int size, int target){
    int lower = 0;
    int upper = size-1;
    int mid;
    int ans = size;
    while(lower<=upper){
        mid = lower + (upper-lower)/2;
        if( *(arr+mid) == target ){
            return mid;
        }else if(*(arr+mid)>target){
            ans = mid;
            upper = mid-1;
        }else{
            lower = mid+1;
        }
    }
    return ans;
}
int main(int argc, char** argv){
    int arr[] = {1,3,5,6};
    cout << findLowerBound(arr,4,5)<<"\n";
    cout << findLowerBound(arr,4,2)<<"\n";
    cout << findLowerBound(arr,4,7)<<"\n";
    
    cout << findLowerBound_2(arr,4,5)<<"\n";
    cout << findLowerBound_2(arr,4,2)<<"\n";
    cout << findLowerBound_2(arr,4,7)<<"\n";
}
